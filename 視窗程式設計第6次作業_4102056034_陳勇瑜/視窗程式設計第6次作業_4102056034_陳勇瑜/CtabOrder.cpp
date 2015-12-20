// CtabOrder.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "CtabOrder.h"
#include "afxdialogex.h"


// CtabOrder 對話方塊

IMPLEMENT_DYNAMIC(CtabOrder, CDialogEx)

CtabOrder::CtabOrder(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabOrder::IDD, pParent)
{

}

CtabOrder::~CtabOrder()
{
}

void CtabOrder::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CtabOrder, CDialogEx)
END_MESSAGE_MAP()


// CtabOrder 訊息處理常式
