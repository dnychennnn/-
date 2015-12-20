#pragma once


// CtabProduct 對話方塊

class CtabProduct : public CDialogEx
{
	DECLARE_DYNAMIC(CtabProduct)

public:
	CtabProduct(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CtabProduct();

// 對話方塊資料
	enum { IDD = IDD_tabProduct };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	CString pdtName;
	long pdtNum;
	long pdtPrice;
	CString pdtNeed;
	afx_msg void OnBnClickedbt1();
	afx_msg void OnBnClickedaddneed();
	long pdtTotal;
};
