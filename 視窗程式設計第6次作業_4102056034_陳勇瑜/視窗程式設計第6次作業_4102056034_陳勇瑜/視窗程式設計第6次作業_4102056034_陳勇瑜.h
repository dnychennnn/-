
// �����{���]�p��6���@�~_4102056034_���i��.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�
#include "CInformation.h"

// C�����{���]�p��6���@�~_4102056034_���i��App: 
// �аѾ\��@�����O�� �����{���]�p��6���@�~_4102056034_���i��.cpp
//

class C�����{���]�p��6���@�~_4102056034_���i��App : public CWinApp
{
public:
	C�����{���]�p��6���@�~_4102056034_���i��App();

	

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

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


extern C�����{���]�p��6���@�~_4102056034_���i��App theApp;