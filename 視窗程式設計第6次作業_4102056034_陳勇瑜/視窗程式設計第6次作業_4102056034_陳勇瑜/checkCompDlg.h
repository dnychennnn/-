#pragma once
#include "afxcmn.h"


// checkCompDlg ��ܤ��

class checkCompDlg : public CDialogEx
{
	DECLARE_DYNAMIC(checkCompDlg)

public:
	checkCompDlg(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~checkCompDlg();

// ��ܤ�����
	enum { IDD = IDD_checkComp };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl LInventory;
};
