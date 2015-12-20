#pragma once
#include "afxcmn.h"


// checkCompDlg 對話方塊

class checkCompDlg : public CDialogEx
{
	DECLARE_DYNAMIC(checkCompDlg)

public:
	checkCompDlg(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~checkCompDlg();

// 對話方塊資料
	enum { IDD = IDD_checkComp };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl LInventory;
};
