#pragma once


// CtabOrder ��ܤ��

class CtabOrder : public CDialogEx
{
	DECLARE_DYNAMIC(CtabOrder)

public:
	CtabOrder(CWnd* pParent = NULL);   // �зǫغc�禡
	virtual ~CtabOrder();

// ��ܤ�����
	enum { IDD = IDD_tabOrder };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �䴩

	DECLARE_MESSAGE_MAP()
};
