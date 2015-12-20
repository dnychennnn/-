// CtabProduct.cpp : ��@��
//
 
#include "stdafx.h"
#include "�����{���]�p��6���@�~_4102056034_���i��.h"
#include "CtabProduct.h"
#include "afxdialogex.h"


// CtabProduct ��ܤ��

IMPLEMENT_DYNAMIC(CtabProduct, CDialogEx)

CtabProduct::CtabProduct(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabProduct::IDD, pParent)
	, pdtName(_T(""))
	, pdtNum()
	, pdtPrice()
	, pdtNeed(_T(""))
	, pdtTotal(0)
{

}

CtabProduct::~CtabProduct()
{
}

void CtabProduct::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_pdtName, pdtName);
	DDX_Text(pDX, IDC_pdtNum, pdtNum);
	DDX_Text(pDX, IDC_pdtPrice, pdtPrice);
	DDX_Text(pDX, IDC_pdtNeed, pdtNeed);
	DDX_Text(pDX, IDC_EDIT1, pdtTotal);
}


BEGIN_MESSAGE_MAP(CtabProduct, CDialogEx)
	ON_BN_CLICKED(IDC_bt1, &CtabProduct::OnBnClickedbt1)
	ON_BN_CLICKED(IDC_addneed, &CtabProduct::OnBnClickedaddneed)
END_MESSAGE_MAP()


// CtabProduct �T���B�z�`��


void CtabProduct::OnBnClickedbt1()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	UpdateData();
	company[i].pro.pdt_name[j] = pdtName;
	company[i].pro.pdt_num[j] = pdtNum;
	company[i].pro.pdt_price[j] = pdtPrice;
	company[i].pro.pdt_need[j][pn] = pdtNeed;
	company[i].pro.pdt_total = company[i].pro.pdt_price[j] * company[i].pro.pdt_num[j];
	if (1)
	{
		pdtTotal = company[i].pro.pdt_total;
			UpdateData(FALSE);
	}
	UpdateData();
	j++;
	pn = 0;

	GetDlgItem(IDC_pdtName)->SetWindowTextW(NULL);
	GetDlgItem(IDC_pdtNum)->SetWindowTextW(NULL);
	GetDlgItem(IDC_pdtPrice)->SetWindowTextW(NULL);
	GetDlgItem(IDC_pdtNeed)->SetWindowTextW(NULL);
	UpdateWindow(); // ��s��ܮ�.
}


void CtabProduct::OnBnClickedaddneed()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	UpdateData();
	company[i].pro.pdt_need[j][pn] = pdtNeed;
	pn++;
	pdtNeed = "";
	GetDlgItem(IDC_pdtNeed)->SetWindowTextW(NULL);
	UpdateWindow(); // ��s��ܮ�.
}
