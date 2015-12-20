
// �����{���]�p��6���@�~_4102056034_���i��Dlg.cpp : ��@��
//

#include "stdafx.h"
#include "�����{���]�p��6���@�~_4102056034_���i��.h"
#include "�����{���]�p��6���@�~_4102056034_���i��Dlg.h"
#include "addCompany.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// �� App About �ϥ� CAboutDlg ��ܤ��

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ܤ�����
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

// �{���X��@
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


// C�����{���]�p��6���@�~_4102056034_���i��Dlg ��ܤ��



C�����{���]�p��6���@�~_4102056034_���i��Dlg::C�����{���]�p��6���@�~_4102056034_���i��Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C�����{���]�p��6���@�~_4102056034_���i��Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C�����{���]�p��6���@�~_4102056034_���i��Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_TAB1, m_tab);
	
	
}

BEGIN_MESSAGE_MAP(C�����{���]�p��6���@�~_4102056034_���i��Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, &C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnTcnSelchangeTab1)
	ON_BN_CLICKED(ID_addComp, &C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnBnClickedaddcomp)
END_MESSAGE_MAP()


// C�����{���]�p��6���@�~_4102056034_���i��Dlg �T���B�z�`��

BOOL C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �N [����...] �\���[�J�t�Υ\���C

	// IDM_ABOUTBOX �����b�t�ΩR�O�d�򤧤��C
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

	// �]�w����ܤ�����ϥܡC�����ε{�����D�������O��ܤ���ɡA
	// �ج[�|�۰ʱq�Ʀ��@�~
	SetIcon(m_hIcon, TRUE);			// �]�w�j�ϥ�
	SetIcon(m_hIcon, FALSE);		// �]�w�p�ϥ�

	// TODO:  �b���[�J�B�~����l�]�w

	
	m_tab.InsertItem(0, _T("���~"));
	m_tab.InsertItem(1, _T("����"));
	m_tab.InsertItem(2, _T("���u"));
	m_tab.InsertItem(3, _T("�q��"));
	

	m_cur_mode_sel = 0; //�q�{��l��tab
	m_tab.SetCurSel(m_cur_mode_sel);

	//create tab content

	tabProduct.Create(IDD_tabProduct, &m_tab);
	tabMaterial.Create(IDD_tabMaterial, &m_tab);
	tabEmployee.Create(IDD_tabEmployee, &m_tab);
	tabOrder.Create(IDD_tabOrder, &m_tab);
	
	

	//�O�sdialog

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


	

	return TRUE;  // �Ǧ^ TRUE�A���D�z�ﱱ��]�w�J�I
}

void C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �p�G�N�̤p�ƫ��s�[�J�z����ܤ���A�z�ݭn�U�C���{���X�A
// �H�Kø�s�ϥܡC���ϥΤ��/�˵��Ҧ��� MFC ���ε{���A
// �ج[�|�۰ʧ������@�~�C

void C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ø�s���˸m���e

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �N�ϥܸm����Τ�ݯx��
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �yø�ϥ�
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ��ϥΪ̩즲�̤p�Ƶ����ɡA
// �t�ΩI�s�o�ӥ\����o�����ܡC
HCURSOR C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	page[m_cur_mode_sel]->ShowWindow(SW_HIDE); 
	m_cur_mode_sel = m_tab.GetCurSel();
	page[m_cur_mode_sel]->ShowWindow(SW_SHOW);
	*pResult = 0;
}
void C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnBnClickedOk()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	CDialogEx::OnOK();
}


void C�����{���]�p��6���@�~_4102056034_���i��Dlg::OnBnClickedaddcomp()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	CDialogEx dig(IDD_addCompany);
	dig.DoModal();
}


void CAboutDlg::gotoCheckcomp()
{
	// TODO:  �b���[�J�z���R�O�B�z�`���{���X
	CDialogEx check(IDD_checkComp);
	check.DoModal();
}

void CAboutDlg::OnUpdate32776(CCmdUI *pCmdUI)
{
	// TODO:  �b���[�J�z���R�O��s UI �B�z�`���{���X
	CDialogEx check(IDD_checkComp);
	check.DoModal();
}
