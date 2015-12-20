// checkCompDlg.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "checkCompDlg.h"
#include "afxdialogex.h"


// checkCompDlg 對話方塊

IMPLEMENT_DYNAMIC(checkCompDlg, CDialogEx)

checkCompDlg::checkCompDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(checkCompDlg::IDD, pParent)
{

}

checkCompDlg::~checkCompDlg()
{
}

void checkCompDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Linventory, LInventory);
}


BEGIN_MESSAGE_MAP(checkCompDlg, CDialogEx)
END_MESSAGE_MAP()


// checkCompDlg 訊息處理常式


BOOL checkCompDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	LInventory.InsertColumn(0, _T("Product"), LVCFMT_LEFT, 100);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION:  OCX 屬性頁應傳回 FALSE
}
