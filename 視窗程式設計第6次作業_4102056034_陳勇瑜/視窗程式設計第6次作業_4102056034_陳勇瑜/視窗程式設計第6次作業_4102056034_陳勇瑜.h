
// 視窗程式設計第6次作業_4102056034_陳勇瑜.h : PROJECT_NAME 應用程式的主要標頭檔
//

#pragma once

#ifndef __AFXWIN_H__
	#error "對 PCH 包含此檔案前先包含 'stdafx.h'"
#endif

#include "resource.h"		// 主要符號
#include "CInformation.h"

// C視窗程式設計第6次作業_4102056034_陳勇瑜App: 
// 請參閱實作此類別的 視窗程式設計第6次作業_4102056034_陳勇瑜.cpp
//

class C視窗程式設計第6次作業_4102056034_陳勇瑜App : public CWinApp
{
public:
	C視窗程式設計第6次作業_4102056034_陳勇瑜App();

	

// 覆寫
public:
	virtual BOOL InitInstance();

// 程式碼實作

	DECLARE_MESSAGE_MAP()




};

static Ccompany company[20];
static int i; //index of company
static int j; //index of product
static int pn; //index of prodoct need
static int k; //index of material
static int e; //index of employee
static int c; //index of customer
static int o; //index of order


extern C視窗程式設計第6次作業_4102056034_陳勇瑜App theApp;