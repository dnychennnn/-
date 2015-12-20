#pragma once


// CtabOrder 對話方塊

class CtabOrder : public CDialogEx
{
	DECLARE_DYNAMIC(CtabOrder)

public:
	CtabOrder(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~CtabOrder();

// 對話方塊資料
	enum { IDD = IDD_tabOrder };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
};
