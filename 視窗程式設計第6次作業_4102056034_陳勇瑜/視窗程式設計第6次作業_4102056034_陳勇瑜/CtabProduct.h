#pragma once


// CtabProduct ��ܤ��

class CtabProduct : public CDialogEx
{
	DECLARE_DYNAMIC(CtabProduct)

public:
	CtabProduct(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~CtabProduct();

// ��ܤ�����
	enum { IDD = IDD_tabProduct };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

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
