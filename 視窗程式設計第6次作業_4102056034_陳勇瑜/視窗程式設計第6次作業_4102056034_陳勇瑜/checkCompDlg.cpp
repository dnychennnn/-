// checkCompDlg.cpp : ��@��
//

#include "stdafx.h"
#include "�����{���]�p��6���@�~_4102056034_���i��.h"
#include "checkCompDlg.h"
#include "afxdialogex.h"


// checkCompDlg ��ܤ��

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


// checkCompDlg �T���B�z�`��


BOOL checkCompDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	LInventory.InsertColumn(0, _T("Product"), LVCFMT_LEFT, 100);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION:  OCX �ݩʭ����Ǧ^ FALSE
}
