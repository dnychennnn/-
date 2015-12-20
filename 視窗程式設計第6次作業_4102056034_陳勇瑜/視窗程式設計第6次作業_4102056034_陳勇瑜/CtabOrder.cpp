// CtabOrder.cpp : ��@��
//

#include "stdafx.h"
#include "�����{���]�p��6���@�~_4102056034_���i��.h"
#include "CtabOrder.h"
#include "afxdialogex.h"


// CtabOrder ��ܤ��

IMPLEMENT_DYNAMIC(CtabOrder, CDialogEx)

CtabOrder::CtabOrder(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabOrder::IDD, pParent)
	, custName(_T(""))
	, location(_T(""))
	, orderName(_T(""))
	, orderDate(_T(""))
	, orderPrice(0)
	, orderNum(0)
{

}

CtabOrder::~CtabOrder()
{
}

void CtabOrder::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_custName, custName);
	DDX_Text(pDX, IDC_location, location);
	DDX_Text(pDX, IDC_orderName, orderName);
	DDX_Text(pDX, IDC_orderDate, orderDate);
	DDX_Text(pDX, IDC_orderPrice, orderPrice);
	DDX_Text(pDX, IDC_orderNum, orderNum);
}


BEGIN_MESSAGE_MAP(CtabOrder, CDialogEx)
	ON_BN_CLICKED(IDOK, &CtabOrder::OnBnClickedOk)
	ON_BN_CLICKED(IDC_addOrder, &CtabOrder::OnBnClickedaddorder)
END_MESSAGE_MAP()


// CtabOrder �T���B�z�`��


void CtabOrder::OnBnClickedOk()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	UpdateData();
	company[i].order.cust_name[c] = custName;
	company[i].order.location[c] = location;
	company[i].order.order_name[c][e] = orderName;
	company[i].order.order_num[c][e] = orderNum;
	company[i].order.order_price[c][e] = orderPrice;
	company[i].order.expectedDate[c] = orderDate;
	company[i].order.order_total = company[i].order.order_num[c][e] * company[i].order.order_price[c][e];
	c++;
	
	//�M��editbox
	GetDlgItem(IDC_custName)->SetWindowTextW(NULL);
	GetDlgItem(IDC_location)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderName)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderNum)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderPrice)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderDate)->SetWindowTextW(NULL);
	UpdateWindow(); // ��s��ܮ�.
}


void CtabOrder::OnBnClickedaddorder()
{
	// TODO:  �b���[�J����i���B�z�`���{���X
	UpdateData();
	company[i].order.order_name[c][e] = orderName;
	company[i].order.order_num[c][e] = orderNum;
	company[i].order.order_price[c][e] = orderPrice;
	e++;

	GetDlgItem(IDC_orderName)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderNum)->SetWindowTextW(NULL);
	GetDlgItem(IDC_orderPrice)->SetWindowTextW(NULL);
	UpdateWindow(); // ��s��ܮ�.
}
