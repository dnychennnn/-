#pragma once


// CtabEmployee ��ܤ��

class CtabEmployee : public CDialogEx
{
	DECLARE_DYNAMIC(CtabEmployee)

public:
	CtabEmployee(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~CtabEmployee();

// ��ܤ�����
	enum { IDD = IDD_tabEmployee };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
public:
	CString empName;
	CString empDate;
	long empSalary;
	afx_msg void OnBnClickedOk();
	long empTotal;
};
