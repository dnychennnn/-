#pragma once
#include "afxwin.h"


// addCompany ��ܤ��

class addCompany : public CDialogEx
{
	DECLARE_DYNAMIC(addCompany)

public:
	addCompany(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~addCompany();

// ��ܤ�����
	enum { IDD = IDD_addCompany };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	
	CString comp_name;
	long m_asset;
	long m_lia;
	CString m_date;
	afx_msg void OnBnClickedYo();
};
