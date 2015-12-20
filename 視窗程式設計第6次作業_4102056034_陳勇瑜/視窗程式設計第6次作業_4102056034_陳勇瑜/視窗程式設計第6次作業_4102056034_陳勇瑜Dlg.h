
// 視窗程式設計第6次作業_4102056034_陳勇瑜Dlg.h : 標頭檔
//

#pragma once
#include "afxcmn.h"
#include "CtabMaterial.h"
#include "CtabEmployee.h"
#include "CtabProduct.h"
#include "CtabOrder.h"




// C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg 對話方塊
class C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg : public CDialogEx
{
// 建構
public:
	C視窗程式設計第6次作業_4102056034_陳勇瑜Dlg(CWnd* pParent = NULL);	// 標準建構函式
	CTabCtrl m_tab;
	CMenu m_menu;
	CtabMaterial tabMaterial;
	CtabProduct tabProduct;
	CtabEmployee tabEmployee;
	CtabOrder tabOrder;


	//查詢
	

	
	//控制tab
	int m_cur_mode_sel;
	CDialog *page[6];

// 對話方塊資料
	enum { IDD = IDD_MY6_4102056034__DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支援


// 程式碼實作
protected:
	HICON m_hIcon;

	// 產生的訊息對應函式
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	 //company's tab
	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedMfcmenubutton1();
	afx_msg void OnBnClickedaddcomp();
};
