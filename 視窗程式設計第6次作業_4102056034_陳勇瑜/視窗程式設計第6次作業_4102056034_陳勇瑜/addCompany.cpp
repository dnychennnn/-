// addCompany.cpp : ��@��
//

#include "stdafx.h"
#include "�����{���]�p��6���@�~_4102056034_���i��.h"

#include "addCompany.h"
#include "afxdialogex.h"



// addCompany ��ܤ��

IMPLEMENT_DYNAMIC(addCompany, CDialogEx)

addCompany::addCompany(CWnd* pParent /*=NULL*/)
	: CDialogEx(addCompany::IDD, pParent)
	, comp_name(_T(""))
	, m_asset(0)
	, m_lia(0)
	, m_date(_T(""))
{

}

addCompany::~addCompany()
{
}

void addCompany::DoDataExchange(CDataExchange* pDX)
{
	UpdateData();
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Name, comp_name);
	DDX_Text(pDX, IDC_wtf, m_asset);
	DDX_Text(pDX, IDC_hello, m_lia);
	DDX_Text(pDX, IDC_EDIT4, m_date);
}


BEGIN_MESSAGE_MAP(addCompany, CDialogEx)
	
	ON_BN_CLICKED(IDC_YO, &addCompany::OnBnClickedYo)
END_MESSAGE_MAP()


// addCompany �T���B�z�`��


void addCompany::OnBnClickedYo()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
}
