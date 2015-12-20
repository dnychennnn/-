#pragma once


// CtabMaterial 對話方塊

class CtabMaterial : public CDialogEx
{
	DECLARE_DYNAMIC(CtabMaterial)

public:
	CtabMaterial(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CtabMaterial();

// 對話方塊資料
	enum { IDD = IDD_tabMaterial };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

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
