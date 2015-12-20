#pragma once


// CtabEmployee 對話方塊

class CtabEmployee : public CDialogEx
{
	DECLARE_DYNAMIC(CtabEmployee)

public:
	CtabEmployee(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CtabEmployee();

// 對話方塊資料
	enum { IDD = IDD_tabEmployee };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	CString empName;
	CString empDate;
	long empSalary;
	afx_msg void OnBnClickedOk();
	long empTotal;
};
