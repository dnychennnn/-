#pragma once
#include "afxwin.h"


// addCompany 對話方塊

class addCompany : public CDialogEx
{
	DECLARE_DYNAMIC(addCompany)

public:
	addCompany(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~addCompany();

// 對話方塊資料
	enum { IDD = IDD_addCompany };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	
	CString comp_name;
	long m_asset;
	long m_lia;
	CString m_date;
	afx_msg void OnBnClickedYo();
};
