#pragma once


// CtabMaterial ��ܤ��

class CtabMaterial : public CDialogEx
{
	DECLARE_DYNAMIC(CtabMaterial)

public:
	CtabMaterial(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~CtabMaterial();

// ��ܤ�����
	enum { IDD = IDD_tabMaterial };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString mtlName;
	long mtlPrice;
	long mtlNum;
	int test;
	afx_msg void OnCbnSelchangeCombo1();
	long trytry;
};
