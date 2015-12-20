// addCompany.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"

#include "addCompany.h"
#include "afxdialogex.h"



// addCompany 對話方塊

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


// addCompany 訊息處理常式


void addCompany::OnBnClickedYo()
{
	// TODO:  在此加入控制項告知處理常式程式碼
}
