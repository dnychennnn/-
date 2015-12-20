// CtabEmployee.cpp : 實作檔
//

#include "stdafx.h"
#include "視窗程式設計第6次作業_4102056034_陳勇瑜.h"
#include "CtabEmployee.h"
#include "afxdialogex.h"


// CtabEmployee 對話方塊

IMPLEMENT_DYNAMIC(CtabEmployee, CDialogEx)

CtabEmployee::CtabEmployee(CWnd* pParent /*=NULL*/)
	: CDialogEx(CtabEmployee::IDD, pParent)
	, empName(_T(""))
	, empDate(_T(""))
	, empSalary(0)
	, empTotal(0)
{

}

CtabEmployee::~CtabEmployee()
{
}

void CtabEmployee::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_empName, empName);
	DDX_Text(pDX, IDC_empDate, empDate);
	DDX_Text(pDX, IDC_empSalary, empSalary);
	DDX_Text(pDX, IDC_EDIT1, empTotal);
}


BEGIN_MESSAGE_MAP(CtabEmployee, CDialogEx)
	ON_BN_CLICKED(IDOK, &CtabEmployee::OnBnClickedOk)
END_MESSAGE_MAP()


// CtabEmployee 訊息處理常式


void CtabEmployee::OnBnClickedOk()
{
	// TODO:  在此加入控制項告知處理常式程式碼
	UpdateData();
	company[i].emp.emp_name[e] = empName;
	company[i].emp.emp_date[e] = empDate;
	company[i].emp.emp_sal[e] = empSalary;
	company[i].emp.emp_total += company[i].emp.emp_sal[e];
	if (1)
	{
		empTotal = company[i].emp.emp_total;
		UpdateData(FALSE);
	}
	e++;
	UpdateData();
	GetDlgItem(IDC_empName)->SetWindowTextW(NULL);
	GetDlgItem(IDC_empDate)->SetWindowTextW(NULL);
	GetDlgItem(IDC_empSalary)->SetWindowTextW(NULL);
	UpdateWindow(); // 更新對話框.

}
