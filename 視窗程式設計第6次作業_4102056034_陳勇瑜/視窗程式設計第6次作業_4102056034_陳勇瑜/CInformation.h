
#pragma once
#define STRMAX 30
#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "string.h"

using namespace std;

class CEmployee
{
public:

	int countEmp = 0;
	CString emp_name[10];
	CString emp_date[10];
	long emp_sal[10];
	long emp_total = 0;
};

class CProduct
{
public:
	int countPdt;
	CString pdt_name[10];
	long pdt_num[10];
	long pdt_price[10];
	CString pdt_need[10][10];
	long pdt_total = 0;


};

 class CMaterial
{
public:
	int countMtl;
	CString mtl_name[STRMAX];
	long mtl_num[STRMAX];
	long mtl_price[STRMAX];
	long mtl_total = 0;
};

class COrder
{
public:
	int countOrder;
	CString cust_name[STRMAX];
	int cust_num;
	CString location[STRMAX];
	CString order_name[STRMAX][10];
	long order_num[STRMAX][10];
	long order_price[STRMAX][10];
	long order_total;
	CString expectedDate[STRMAX];
	
};

class Ccompany
{
public:
	//basic info
	string name;
	long init_ast;
	long init_lia;
	string date;
	CEmployee emp;
	CProduct pro;
	CMaterial mtl;
	COrder order;
};

/*class global {
public:
	static Ccompany company[20];
	static int i; //index of company
	static int j; //index of product
	static int pn; //index of prodoct need
	static int k; //index of material
}; */ 
	





