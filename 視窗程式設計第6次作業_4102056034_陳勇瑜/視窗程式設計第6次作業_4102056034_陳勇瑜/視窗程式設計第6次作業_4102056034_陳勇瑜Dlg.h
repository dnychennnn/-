
// �����{���]�p��6���@�~_4102056034_���i��Dlg.h : ���Y��
//

#pragma once
#include "afxcmn.h"
#include "CtabMaterial.h"
#include "CtabEmployee.h"
#include "CtabProduct.h"
#include "CtabOrder.h"




// C�����{���]�p��6���@�~_4102056034_���i��Dlg ��ܤ��
class C�����{���]�p��6���@�~_4102056034_���i��Dlg : public CDialogEx
{
// �غc
public:
	C�����{���]�p��6���@�~_4102056034_���i��Dlg(CWnd* pParent = NULL);	// �зǫغc�禡
	CTabCtrl m_tab;
	CMenu m_menu;
	CtabMaterial tabMaterial;
	CtabProduct tabProduct;
	CtabEmployee tabEmployee;
	CtabOrder tabOrder;


	//�d��
	

	
	//����tab
	int m_cur_mode_sel;
	CDialog *page[6];

// ��ܤ�����
	enum { IDD = IDD_MY6_4102056034__DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �䴩


// �{���X��@
protected:
	HICON m_hIcon;

	// ���ͪ��T�������禡
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	 //company's tab
	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedMfcmenubutton1();
	afx_msg void OnBnClickedaddcomp();
};
