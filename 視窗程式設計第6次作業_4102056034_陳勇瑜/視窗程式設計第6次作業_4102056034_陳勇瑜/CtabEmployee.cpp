// CtabEmployee.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "CtabEmployee.h"
#include "afxdialogex.h"


// CtabEmployee 對話方塊

IMPLEMENT_DYNAMIC(CtabEmployee, CDialogEx)

CtabEmployee::CtabEmployee(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabEmployee::IDD, pParent)
{

}

CtabEmployee::~CtabEmployee()
{
}

void CtabEmployee::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CtabEmployee, CDialogEx)
END_MESSAGE_MAP()


// CtabEmployee 訊息處理常式
