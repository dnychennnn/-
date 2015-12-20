
// 視窗程式設計第6次作業_4102056034_陳勇瑜Dlg.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜Dlg.h"
#include "addCompany.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 對 App About 使用 CAboutDlg 對話方塊

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 對話方塊資料
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

// 程式碼實作
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void gotoCheckcomp();
	afx_msg void OnUpdate32776(CCmdUI *pCmdUI);
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_COMMAND(ID_32776, &CAboutDlg::gotoCheckcomp)
	ON_UPDATE_COMMAND_UI(ID_32776, &CAboutDlg::OnUpdate32776)
END_MESSAGE_MAP()


// C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg 對話方塊



C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_TAB1, m_tab);
	
	
}

BEGIN_MESSAGE_MAP(C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnTcnSelchangeTab1)
	ON_BN_CLICKED(ID_addComp, &C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnBnClickedaddcomp)
END_MESSAGE_MAP()


// C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg 訊息處理常式

BOOL C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 將 [關於...] 功能表加入系統功能表。

	// IDM_ABOUTBOX 必須在系統命令範圍之中。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 設定此對話方塊的圖示。當應用程式的主視窗不是對話方塊時，
	// 框架會自動從事此作業
	SetIcon(m_hIcon, TRUE);			// 設定大圖示
	SetIcon(m_hIcon, FALSE);		// 設定小圖示

	// TODO:  在此加入額外的初始設定

	
	m_tab.InsertItem(0, _T("產品"));
	m_tab.InsertItem(1, _T("材料"));
	m_tab.InsertItem(2, _T("員工"));
	m_tab.InsertItem(3, _T("訂單"));
	

	m_cur_mode_sel = 0; //默認初始的tab
	m_tab.SetCurSel(m_cur_mode_sel);

	//create tab content

	tabProduct.Create(IDD_tabProduct, &m_tab);
	tabMaterial.Create(IDD_tabMaterial, &m_tab);
	tabEmployee.Create(IDD_tabEmployee, &m_tab);
	tabOrder.Create(IDD_tabOrder, &m_tab);
	
	

	//保存dialog

	page[0] = &tabProduct;
	page[1] = &tabMaterial;
	page[2] = &tabEmployee;
	page[3] = &tabOrder;
	

	
	CRect rc;
	m_tab.GetClientRect(&rc);
	rc.top += 21;
	rc.bottom -= 2;
	rc.left += 2;
	rc.right -= 1;

	

	tabProduct.MoveWindow(&rc);
	tabProduct.ShowWindow(SW_SHOW);

	tabMaterial.MoveWindow(&rc);
	tabMaterial.ShowWindow(SW_HIDE);

	tabEmployee.MoveWindow(&rc);
	tabEmployee.ShowWindow(SW_HIDE);

	tabOrder.MoveWindow(&rc);
	tabOrder.ShowWindow(SW_HIDE);



	UpdateData(false);


	

	return TRUE;  // 傳回 TRUE，除非您對控制項設定焦點
}

void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果將最小化按鈕加入您的對話方塊，您需要下列的程式碼，
// 以便繪製圖示。對於使用文件/檢視模式的 MFC 應用程式，
// 框架會自動完成此作業。

void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 繪製的裝置內容

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 將圖示置中於用戶端矩形
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 描繪圖示
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 當使用者拖曳最小化視窗時，
// 系統呼叫這個功能取得游標顯示。
HCURSOR C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  在此加入控制項告知處理常式程式碼
	page[m_cur_mode_sel]->ShowWindow(SW_HIDE); 
	m_cur_mode_sel = m_tab.GetCurSel();
	page[m_cur_mode_sel]->ShowWindow(SW_SHOW);
	*pResult = 0;
}
void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnBnClickedOk()
{
	// TODO:  在此加入控制項告知處理常式程式碼
	CDialogEx::OnOK();
}


void C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg::OnBnClickedaddcomp()
{
	// TODO:  在此加入控制項告知處理常式程式碼
	CDialogEx dig(IDD_addCompany);
	dig.DoModal();
}


void CAboutDlg::gotoCheckcomp()
{
	// TODO:  在此加入您的命令處理常式程式碼
	CDialogEx check(IDD_checkComp);
	check.DoModal();
}

void CAboutDlg::OnUpdate32776(CCmdUI *pCmdUI)
{
	// TODO:  在此加入您的命令更新 UI 處理常式程式碼
	CDialogEx check(IDD_checkComp);
	check.DoModal();
}
