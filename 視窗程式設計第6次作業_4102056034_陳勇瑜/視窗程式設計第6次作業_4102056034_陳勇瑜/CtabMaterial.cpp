// CtabMaterial.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "CtabMaterial.h"
#include "afxdialogex.h"


// CtabMaterial 對話方塊

IMPLEMENT_DYNAMIC(CtabMaterial, CDialogEx)

CtabMaterial::CtabMaterial(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabMaterial::IDD, pParent)
	, mtlName(_T(""))
	, mtlPrice(0)
	, mtlNum(0)
	, test(0)
	, trytry(0)
{

}

CtabMaterial::~CtabMaterial()
{
}

void CtabMaterial::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_matName, mtlName);
	DDX_Text(pDX, IDC_matPrice, mtlPrice);
	DDX_Text(pDX, IDC_matNum, mtlNum);

	DDX_CBIndex(pDX, IDC_COMBO1, test);
	DDX_Text(pDX, IDC_EDIT1, trytry);
}


BEGIN_MESSAGE_MAP(CtabMaterial, CDialogEx)
	ON_BN_CLICKED(IDOK, &CtabMaterial::OnBnClickedOk)
	
END_MESSAGE_MAP()


// CtabMaterial 訊息處理常式


void CtabMaterial::OnBnClickedOk()
{
	// TODO:  在此加入控制項告知處理常式程式碼
	UpdateData();
	company[i].mtl.mtl_name[k] = mtlName;
	company[i].mtl.mtl_num[k] = mtlNum;
	company[i].mtl.mtl_price[k] = mtlPrice;
	company[i].mtl.mtl_total += company[i].mtl.mtl_num[k] * company[i].mtl.mtl_price[k];
	if (1)
	{
		trytry = company[i].mtl.mtl_total;
		UpdateData(FALSE);
	}
	k++;
}


