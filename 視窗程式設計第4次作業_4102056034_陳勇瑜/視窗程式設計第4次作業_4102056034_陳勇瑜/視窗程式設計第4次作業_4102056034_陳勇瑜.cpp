// 視窗程式設計第4次作業_4102056034_陳勇瑜.cpp : 定義主控台應用程式的進入點。
//

/***************************
4102056034 陳勇瑜 第4次作業 11/20
***************************/

/***********************
視窗程式設計第4次作業:

project: Accounting system
name: 陳勇瑜
studentID: 4102056034
deadline: 2015/10/20
require: using classes
************************/

#include "stdafx.h"
#include "stdio.h"
#include "iostream"
#include "string.h"


using namespace std;
#define STRMAX 30
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((*array)))





class CInformation{
public:

	void swapStr(char* str1, char* str2){
		char* temp = str1;
		str1 = str2;
		str2 = temp;
		delete temp;
	}
	void swapStr2(char** str1, char** str2){
		char** temp = str1;
		str1 = str2;
		str2 = temp;
		delete temp;
	}
	void swapLong(long* long1, long* long2){
		long temp = *long1;
		*long1 = *long2;
		*long2 = temp;
	}
	void swapLong2(long** long1, long** long2){
		long* temp = *long1;
		*long1 = *long2;
		*long2 = temp;
	}
	void sortBilling(int cust_num, char* cust_name, char** order_name, long** order_num){
		int choice = 0;
		cout << "1 依照名字" << endl << "2 依照購買數量" << endl;
		cout << "請問您想怎麼排列您的發票?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by order name
			for (int k = 0; k <= cust_num; k++){
				for (int i = 0; i < ARRAY_SIZE(*order_name); i++){
					for (int j = i + 1; j < ARRAY_SIZE(*order_name); j++){
						if (strcmp((*(order_name + k) + i), (*(order_name + k) + j))){
							swapStr((*(order_name + k) + i), *(order_name + k) + j);
							swapLong(*(order_num + k) + i, *(order_num + k) + j);
						}
					}
				}
			}
			break;
		case 2:
			//sorted by order number
			for (int k = 0; k <= cust_num; k++){
				for (int i = 0; i < ARRAY_SIZE(*order_name); i++){
					for (int j = i + 1; j < ARRAY_SIZE(*order_name); j++){
						if ((*(order_num + k) + i) >(*(order_num + k) + j)){
							swapStr((*(order_name + k) + i), *(order_name + k) + j);
							swapLong(*(order_num + k) + i, *(order_num + k) + j);
						}
					}
				}
			}
			break;
		default:
			break;
		}
	}
	void sortPdt(char* pdt_name, long* pdt_num){
		int choice = 0;
		cout << "1 依照名字" << endl << "2 依照總資產" << endl;
		cout << "請問您想怎麼排列您的庫存(產品)?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by product name
			for (int i = 0; i < ARRAY_SIZE(pdt_name); i++){
				for (int j = i + 1; j < ARRAY_SIZE(pdt_name); j++){
					if (strcmp(pdt_name + i, pdt_name + j)){
						swapStr(pdt_name + i, pdt_name + j);
						swapLong(pdt_num + i, pdt_num + j);
					}
				}
			}
			break;
		case 2:
			//sorted by product number
			for (int i = 0; i < ARRAY_SIZE(pdt_name); i++){
				for (int j = i + 1; j < ARRAY_SIZE(pdt_name); j++){
					if (*(pdt_num + i) > *(pdt_num + j)){
						swapStr(pdt_name + i, pdt_name + j);
						swapLong(pdt_num + i, pdt_num + j);
					}
				}
			}
			break;
		default:
			break;
		}
	}
	void sortMtl(char* mtl_name, long* mtl_num){
		int choice = 0;
		cout << "1 依照名字" << endl << "2 依照總資產" << endl;
		cout << "請問您想怎麼排列您的庫存(材料)?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by product name
			for (int i = 0; i < ARRAY_SIZE(mtl_name); i++){
				for (int j = i + 1; j < ARRAY_SIZE(mtl_name); j++){
					if (strcmp(mtl_name + i, mtl_name + j)){
						swapStr(mtl_name + i, mtl_name + j);
						swapLong((mtl_num + i), (mtl_num + j));
					}
				}
			}
			break;
		case 2:
			//sorted by product number
			for (int i = 0; i < ARRAY_SIZE(mtl_name); i++){
				for (int j = i + 1; j < ARRAY_SIZE(mtl_name); j++){
					if (*(mtl_num + i) > *(mtl_num + j)){
						swapStr(mtl_name + i, mtl_name + j);
						swapLong((mtl_num + i), (mtl_num + j));
					}
				}
			}
			break;
		default:
			break;
		}
	}
	void sortShowcust(char* cust_name, int cust_num, char* location){
		int choice = 0;
		cout << "1 依照客戶名" << endl << "2 客戶地址" << endl;
		cout << "請問您想怎麼排列訂單?: ";
		cin >> choice;
		switch (choice){
		case 1:
			//sorted by customer's name
			for (int i = 0; i < cust_num; i++){
				for (int j = i + 1; j < cust_num; j++){
					if (strcmp(cust_name + i, cust_name + j)){
						swapStr(cust_name + i, cust_name + j);
						swapStr(location + i, (location + j));
					}
				}
			}
			break;
		case 2:
			//sorted by location
			for (int i = 0; i < cust_num; i++){
				for (int j = i + 1; j < cust_num; j++){
					if (strcmp(location + i, location + j)){
						swapStr(cust_name + i, cust_name + j);
						swapStr(location + i, (location + j));
					}
				}
			}
			break;
		default:
			break;
		}



	}
	void sortShowemp(int countEmp, char* emp_name, long* emp_sal, char* emp_date){
		int choice = 0;
		cout << "1 依照員工名字" << endl << "2 依照員工薪水" << endl;
		cout << "請問您想怎麼排列您的庫存(產品)?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by employee's name
			for (int i = 0; i < countEmp; i++){
				for (int j = i + 1; j < countEmp; j++){
					if (strcmp(emp_name + i, emp_name + j)){
						swapStr(emp_name + i, emp_name + j);
						swapLong(emp_sal + i, emp_sal + j);
					}
				}
			}
			break;
		case 2:
			//sorted by employee's salary
			for (int i = 0; i < countEmp; i++){
				for (int j = i + 1; j < countEmp; j++){
					if (emp_sal + i > emp_sal + j){
						swapStr(emp_name + i, emp_name + j);
						swapLong(emp_sal + i, emp_sal + j);
					}
				}
			}
			break;
		case 3:
			//sorted by emplyee's date
			for (int i = 0; i < countEmp; i++){
				for (int j = i + 1; j < countEmp; j++){
					if (strcmp(emp_date + i, emp_date + j)){
						swapStr(emp_name + i, emp_name + j);
						swapLong(emp_sal + i, emp_sal + j);
						swapStr(emp_date + i, emp_date + j);
					}
				}
			}
		default:
			break;
		}
	}
	void sortShoworder(int cust_num, int countOrder, char* cust_name, char** order_name, long** order_num){
		int choice = 0;
		cout << "1 依照客戶名" << endl << "2 依照產品名" << endl << "3 依照產品數量";
		cout << "請問您想怎麼排列訂單?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by customer's name
			for (int i = 0; i < cust_num; i++){
				for (int j = i + 1; j < cust_num; j++){
					if (strcmp(cust_name + i, cust_name + j)){
						swapStr(cust_name + i, cust_name + j);
						swapLong2((order_num + i), (order_num + j));
					}
				}
			}
			break;
		case 2:
			//sorted by order's name
			for (int k = 0; k <= cust_num; k++){
				for (int i = 0; i < ARRAY_SIZE(*order_name); i++){
					for (int j = i + 1; j < ARRAY_SIZE(*order_name); j++){
						if (strcmp((*(order_name + k) + i), (*(order_name + k) + j))){
							swapStr((*(order_name + k) + i), *(order_name + k) + j);
							swapLong(*(order_num + k) + i, *(order_num + k) + j);
						}
					}
				}
			}
			break;
		case 3:
			//sorted by order's name
			for (int k = 0; k <= cust_num; k++){
				for (int i = 0; i < ARRAY_SIZE(*order_name); i++){
					for (int j = i + 1; j < ARRAY_SIZE(*order_name); j++){
						if (*(*(order_name + k) + i) > *(*(order_name + k) + j)){
							swapStr((*(order_name + k) + i), *(order_name + k) + j);
							swapLong(*(order_num + k) + i, *(order_num + k) + j);
						}
					}
				}
			}
			break;
		default:
			break;
		}
	}	
	void billing(int cust_num, char* cust_name, char** order_name, long** order_num, long order_totoal, int countOrder){
		sortBilling(cust_num, cust_name, order_name, order_num);
		cout << "+++++++++++++++++++++++++++++++" << endl;
		for (int j = 0; j <= cust_num; j++){
			cout << "    HELLO " << cust_name + j << ", This is your receipt!" << endl << endl;
			for (int i = 0; i < countOrder; i++){
				cout << *(order_name + j) + i << "\t" << "X " << *(*(order_num + j) + i) << endl;
			}
			cout << "-------------------------------" << endl;
			cout << "Total: " << order_totoal << endl;
			cout << "+++++++++++++++++++++++++++++++" << endl;
		}

	}
	void inventory(int countPdt, char* pdt_name, long* pdt_num, char** pdt_need, int countOrder, char** order_name, long** order_num, int countMtl, char* mtl_name, long* mtl_num){
		long min = 100000000000;
		//每次input order就call一次 計算剩餘pdt
		//每次input order就call一次 計算剩餘mtl
		for (int i = 0; i < countOrder; i++){
			for (int j = 0; j < countPdt; j++){
				if (strcmp(((*order_name) + i), pdt_name + j)){
					*(pdt_num + j) -= *(*order_num + i);
					for (int k = 0; k < ARRAY_SIZE(*(pdt_need + j)); k++){
						for (int l = 0; l < countMtl; l++){
							*(mtl_num + l) -= 1; //消耗MATERIAL
							//判斷倉庫可做多少產品
							if (strcmp(*(pdt_need + j), mtl_name + l)){
								if (*(mtl_num + l) < min)
									min = *(mtl_num + l);
							}

						}
						cout << "倉庫還有: " << min << "個" << pdt_name + j;
					}
				}
			}
		}
		
	}
	void showInventory(int countPdt, char* pdt_name, long* pdt_num, int countMtl, char* mtl_name, long* mtl_num){
		sortPdt(pdt_name, pdt_num);
		//印出Inventory
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
		cout << "                PRODUCT                    " << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;

		//印出庫存product
		for (int i = 0; i < countPdt; i++){
			cout << pdt_name + i << "\t" << *(pdt_num + i) << endl;
		}
		sortMtl(mtl_name, mtl_num);
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
		cout << "                Materials                    " << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;

		for (int i = 0; i < countMtl; i++){
			cout << mtl_name + i << "\t" << *(mtl_num + i) << endl;
		}
		
	}
};
class Corder{
public:
	int countOrder;
	char* cust_name = new char[STRMAX];
	int cust_num = 0;
	char* location = new char[STRMAX];
	char** order_name = new char*[STRMAX];
	long** order_num = new long*(0);
	long** order_price = new long*(0);
	long order_total =0;
	char* expectedDate = new char[STRMAX];
	bool cont_order = true;
	CInformation info = CInformation();

	void showOrder(int cust_num, int countOrder, char* cust_name, char** order_name, long** order_num){
		info.sortShoworder(cust_num, countOrder, cust_name, order_name, order_num);
		cout << "=====================================" << endl;
		cout << "=             ORDER                 =" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i <= cust_num; i++){
			cout << cust_name + i << "\t" << expectedDate + i << endl;
			for (int j = 0; j < ARRAY_SIZE(*(order_name + cust_num)); j++){
				cout << (*(order_name + i) + j) << "\t" << (*(order_num + i) + j) << endl;
			}
		}
		cout << "=====================================" << endl;
	}
	void showCustomer(char* cust_name, int cust_num, char* location){
		info.sortShowcust(cust_name, cust_num, location);
		cout << "=====================================" << endl;
		cout << "=             Customer              =" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i <= cust_num; i++){
			cout << cust_name + i << "\t" << location + i << endl;
		}
		cout << "=====================================" << endl;
	}

};
class Ccompany{
public:
	//basic info
	char* name = new char[STRMAX];
	long init_ast = 0;
	long init_lia = 0;
	char* date = new char[STRMAX];

	//products
	int countPdt;
	char* pdt_name = new char[STRMAX];
	long* pdt_num = new long(0);
	long* pdt_price = new long(0);
	char** pdt_need = new char*[STRMAX];
	char* pdt_date = new char[STRMAX];
	long pdt_total = 0;

	//employees
	int countEmp;
	char* emp_name = new char[STRMAX];
	char* emp_date = new char[STRMAX];
	long* emp_sal = new long(0);
	long emp_total =0;

	//material
	int countMtl;
	char* mtl_name = new char[STRMAX];
	char* mtl_date = new char[STRMAX];
	long* mtl_num = new long(0);
	long* mtl_price = new long(0);
	long mtl_total = 0;

	//Order
	Corder order = Corder();

	//function
	CInformation info = CInformation();

	void inputCompInfo(){
		cout << "Add a company" << endl;
		cout << "<Basic Information>" << endl;
		cout << "company name: ";
		cin.getline(name, STRMAX);
		cout << "initial assets: ";
		cin >> init_ast;
		cout << "initial liabilities: ";
		cin >> init_lia;
	}
	void inputPdtInfo(){
		cout << "How many items?: ";
		cin >> countPdt;
		int j = 0;
		int i = 0;
		bool cont = true;
		while (j < countPdt)
		{
			fflush(stdin);
			cout << "product name: ";
			cin.getline((pdt_name + j), STRMAX);
			cout << "product number: ";
			cin >> *(pdt_num + j);
			cout << "product price: ";
			cin >> *(pdt_price + j);
			//定義每項產品所需要的原料
			while (cont){
				fflush(stdin);
				cout << "此產品所需要的材料: ";
				*(pdt_need + j) = new char[STRMAX];
				cin.getline(*(pdt_need + j) + i, STRMAX);
				cout << "還要繼續輸入材料?(1/0): ";
				cin >> cont;
				if (cont){
					i++;
				}
			}
			cout << "date(ie: 2015/12/26): ";
			fflush(stdin);
			cin.getline(pdt_date + j,STRMAX) ;
			pdt_total += (*(pdt_price + j)) * (long)(*(pdt_num + j));
			j++;

		}


		cout << "----------------" << endl;

	}
	void inputEmpInfo(){
		cout << "How many employees?: ";
		cin >> countEmp;
		for (int j = 0; j < countEmp; j++)
		{
			fflush(stdin);
			cout << "employee's name: ";
			cin.getline((emp_name)+j, STRMAX);
			cout << "employee's salary: ";
			cin >> *(emp_sal + j);
			cout << "date(ie: 2015/12/26): ";
			fflush(stdin);
			cin.getline(emp_date + j,STRMAX );
			cout << "----------------" << endl;
			emp_total += *(emp_sal + j);
		}
	}
	void inputMtlInfo(){
		cout << "How many materials?: ";
		cin >> countMtl;
		for (int j = 0; j < countMtl; j++)
		{
			fflush(stdin);
			cout << "material's name: ";
			cin.getline((mtl_name)+j, STRMAX);
			cout << "number: ";
			cin >> *(mtl_num + j);
			cout << "price: ";
			cin >> *(mtl_price + j);
			fflush(stdin);
			cout << "date(ie: 2015/12/26): " << endl;
			cin.getline(mtl_date + j,STRMAX);
			cout << "----------------" << endl;
			mtl_total += (long)(*(mtl_num + j)) * (*(mtl_price + j));

		}
	}
	void inputOrderInfo(){

		while (order.cont_order){
			fflush(stdin);
			cout << "customer's name: ";
			cin.getline((order.cust_name + order.cust_num), STRMAX);
			cout << "location(ie: 402台中市南區國光路250號): ";
			cin.getline(order.location+order.cust_num, STRMAX);
			cout << "expected date(ie: 2015/12/26): ";
			cin.getline( (order.expectedDate + order.cust_num), STRMAX );
			cout << "How many orders?: ";
			cin >> order.countOrder;
			for (int j = 0; j < order.countOrder; j++)
			{
				fflush(stdin);
				cout << "product name: ";
				*(order.order_name+order.cust_num) = new char[STRMAX];
				cin.getline(*(order.order_name + order.cust_num) + j,STRMAX);
				cout << "product number: ";
				cin >> *(*(order.order_num + order.cust_num) + j);
				cout << "product price: ";
				cin >> *(*(order.order_price + order.cust_num) + j);
				cout << "----------------" << endl;
				order.order_total = *(*(order.order_num + order.cust_num) + j)**(*(order.order_num + order.cust_num) + j);
				info.inventory(countPdt, pdt_name, pdt_num, pdt_need, order.countOrder, order.order_name, order.order_num, countMtl, mtl_name, mtl_num);
				info.billing(order.cust_num, order.cust_name, order.order_name, order.order_num, order.order_total, order.countOrder);
			}
			cout << "是否繼續輸入訂單?(1/0): ";
			cin >> order.cont_order;
			if (order.cont_order){
				order.cust_num++;
			}
			order.showOrder(order.cust_num, order.countOrder, order.cust_name, order.order_name, order.order_num);
		}
	}
	void showEmployee(int countEmp, char* emp_name, long* emp_sal, char* emp_date){
		CInformation func;
		func.sortShowemp(countEmp, emp_name, emp_sal, emp_date);
		cout << "=====================================" << endl;
		cout << "=             Employee              =" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < countEmp; i++){
			cout << emp_name + i << "\t" << *(emp_sal + i) << "\t" << emp_date + i << endl;
		}
		cout << "=====================================" << endl;

	}
	void modify(){
		cout << "      MODIFY     " << endl;
		cout << "=================" << endl;
		cout << "1 公司" << endl;
		cout << "2 產品" << endl;
		cout << "3 材料" << endl;
		cout << "4 員工" << endl;
		cout << "5 顧客" << endl;
		cout << "6 訂單" << endl;
		cout << "=================" << endl;
		int choice=0;
		int j = 0;
		int k = 0;
		switch (choice)
		{
		case 1:
			cout << "公司名: ";
			cin.getline(name, STRMAX);
			cout << "初始資產: ";
			cin >> init_ast;
			cout << "初始負債: ";
			cin >> init_lia;
			break;
		case 2:
			for (int i = 0; i <= countPdt; i++){
				cout << i << " " << pdt_name+i << endl;
			}
			cout << "請輸入您要修改的產品編號: ";
			cin >> j;
			cout << "產品名: ";
			cin.getline((pdt_name + j), STRMAX);
			cout << "產品數: ";
			cin >> *(pdt_num + j);
			cout << "產品單價: ";
			break;
		case 3:
			
			for (int i = 0; i <= countMtl; i++){
				cout << i << " " << mtl_name+i << endl;
			}
			cout << "請輸入您要修改的材料編號: ";
			cin >> j;
			cout << "材料名: ";
			cin >> mtl_name + j;
			cout << "材料數: ";
			cin >> *(mtl_num + j);
			cout << "材料單價: ";
			cin >> *(mtl_price + j);
			cout << "日期(ie: 2015/12/26): " << endl;
			cin >> mtl_date + j;
			break;
		case 4:
			
			for (int i = 0; i <= countEmp; i++){
				cout << i << " " << emp_name+i << endl;
			}
			cout << "請輸入您要修改的員工編號: ";
			cin >> j;
			cout << "員工名: ";
			cin.getline((emp_name)+j, STRMAX);
			cout << "員工薪水: ";
			cin >> *(emp_sal + j);
			cout << "日期(ie: 2015/12/26): ";
			cin >> emp_date + j;
			break;
		case 5:
			
			for (int i = 0; i <= order.cust_num; i++){
				cout << i << " " << order.cust_name + i << endl;
			}
			cout << "請輸入您要修改的顧客編號: ";
			cin >> j;
			cout << "顧客名: ";
			cin.getline(order.cust_name + j, STRMAX);
			cout << "地址(ie: 402台中市南區國光路250號): ";
			cin.getline(order.location + j, STRMAX);
			cout << "取貨日期(ie: 2015/12/26): " << endl;
			cin.getline((order.expectedDate + j), STRMAX);
			break;
		case 6:
			cout << "請輸入您要修改的顧客編號: ";
			cin >> j;
			cout << "請輸入您要修改的訂單編號: ";
			cin >> k;
			cout << "產品名: " << endl;
			cin.getline(*(order.order_name + j) + k, STRMAX);
			cout << "product number: " << endl;
			cin >> *(*(order.order_num + j) + k);
			cout << "product price: " << endl;
			cin >> *(*(order.order_price + j) + k);
			break;
		}
	}
};
class Cledger{

public:
	void swapCcompany(Ccompany comp1, Ccompany comp2){
		Ccompany temp = Ccompany();
		temp = comp1;
		comp1 = comp2;
		comp2 = temp;
	}
	void sortLedger(Ccompany comp[STRMAX], int count){
		int choice = 0;
		cout << "1 依照名字" << endl << "2 依照總資產" << endl << "3 依照總負債" << endl;
		cout << "請問您想怎麼排列您的總帳?: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			//sorted by name
			for (int i = 0; i <= count; i++){
				for (int j = i + 1; j < count; j++){
					if (strcmp(comp[i].name, comp[j].name)){
						swapCcompany(comp[i], comp[j]);
					}
				}
			}
		case 2:
			//sorted by initial asset
			for (int i = 0; i < count; i++){
				for (int j = i + 1; j < count; j++){
					if (comp[i].init_ast > comp[j].init_ast){
						swapCcompany(comp[i], comp[j]);
					}
				}
			}
		case 3:
			//sorted by initial liability
			for (int i = 0; i < count; i++){
				for (int j = i + 1; j < count; j++){
					if (comp[i].init_lia, comp[j].init_lia){
						swapCcompany(comp[i], comp[j]);
					}
				}
			}
		default:
			break;
		}

	}
	void ledger(Ccompany comp[STRMAX], int count){
		sortLedger(comp, count);
		cout << "===============================" << endl;
		cout << "name" << "\t" << "ASSET" << "\t" << "LIABILITY" << "\t" << "REVENUE" << "\t" << "EXPENSE" << endl;
		for (int i = 0; i <= count; i++){
			cout << comp[i].name << "\t" << comp[i].init_ast + comp[i].pdt_total << "\t" << comp[i].init_lia + comp[i].emp_total + comp[i].mtl_total << "\t" << comp[i].pdt_total << "\t" << comp[i].emp_total + comp[i].mtl_total;
		}
		cout <<endl<< "===============================" << endl;
	}
};
class Cfileio{
public:
	FILE* fp;
	void fileinput(Ccompany comp[STRMAX], int count){
		
		char* str = new char[STRMAX];
		strcpy(str, "../company.txt");
		fp = fopen(str, "w");
		//exception
		if (fp == NULL)
		{
			fprintf(stderr, "打不開檔案啦!\n");
			exit(1);
		}
		//write company
		for (int i = 0; i <= count; i++){
			fprintf(fp, "%s\t%ld\t%ld\n", comp[i].name, comp[i].init_ast, comp[i].init_lia); //公司
		}
		fclose(fp);

		//write product
		for (int i = 0; i <= count; i++){
			char* num = new char[STRMAX];
			strcpy(str, "../product");
			_itoa(i, num, 10);
			strcat(str, num);
			strcat(str, ".txt");
			fp = fopen(str, "w");
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (int j = 0; j < comp[i].countPdt; j++){
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].pdt_name + j, *(comp[i].pdt_num + j), *(comp[i].pdt_price + j), comp[i].pdt_date + j); //產品
			}
			fclose(fp);
		}
		//write need
		for (int i = 0; i <= count; i++){
			char* num = new char[STRMAX];
			strcpy(str, "../need");
			_itoa(i, num, 10);
			strcat(str, num);
			strcat(str, ".txt");
			fp = fopen(str, "w");
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (int j = 0; j < comp[i].countPdt; j++){
				for (int k = 0; k < ARRAY_SIZE(comp[i].pdt_need+j); k++){
					fprintf(fp, "%s\t", *(comp[i].pdt_need + j)+k); //該產品所需原料
				}
				fprintf(fp, "\n");
			}
			fclose(fp);
		}
		//write material
		for (int i = 0; i <= count; i++){
			char* num = new char[STRMAX];
			strcpy(str, "../material");
			_itoa(i, num, 10);
			strcat(str, num);
			strcat(str, ".txt");
			fp = fopen(str, "w");
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (int l = 0; l < comp[i].countMtl; l++)
			{
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].mtl_name + l, *(comp[i].mtl_num + l), *(comp[i].mtl_price + l), comp[i].mtl_date + l); //原料
			}
			fclose(fp);
		}
		//write employee
		for (int i = 0; i <= count; i++){
			
			char* num = new char[STRMAX];
			strcpy(str, "../employee");
			_itoa(i, num, 10);
			strcat(str, num);
			strcat(str, ".txt");
			fp = fopen(str, "w");
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (int a = 0; a < comp[i].countEmp; a++){
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].emp_name+a, *(comp[i].emp_sal+a), comp[i].emp_date+a); //員工
			}
			fclose(fp);
		}
		//write customer
		for (int i = 0; i <= count; i++){
			
			char* num = new char[STRMAX];
			strcpy(str, "../customer");
			_itoa(i, num, 10);
			strcat(str, num);
			strcat(str, ".txt");
			fp = fopen(str, "w");
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (int b = 0; b <= comp[i].order.cust_num; b++){
				fprintf(fp, "%s\t%s\t%s\t\n", comp[i].order.cust_name+b, comp[i].order.location+b, comp[i].order.expectedDate+b); //顧客
			}
			fclose(fp);
		}
		//write order
		for (int i = 0; i <= count; i++){
			char* num = new char[STRMAX];
			int j = 0;
			char* cust_id = new char[STRMAX];
			
			strcpy(str, "../order");
			_itoa(i, num, 10);
			strcat(str, num);
			
			//exception
			if (fp == NULL)
			{
				fprintf(stderr, "打不開檔案啦!\n");
				exit(1);
			}
			for (j = 0; j <= comp[i].order.cust_num; j++){
				_itoa(j, cust_id, 10);
				strcat(str, cust_id);
				strcat(str, ".txt");
				fp = fopen(str, "w");
				for (int b = 0; b <= comp[i].order.countOrder; b++){
					fprintf(fp, "%s\t%ld\t%ld\n", *(comp[i].order.order_name + j)+b, *(*(comp[i].order.order_num+j)+ b), *(*(comp[i].order.order_price+j)+ b)); //該顧客所訂的產品
				}
				delete cust_id;
			}
			fclose(fp);
			delete num;
			
		}
		
	}
	void fileread(Ccompany comp[STRMAX]){
		
		char* str = new char[STRMAX];
		int num = 0;
		char* number = new char[STRMAX];
		int choice=0;
		int i=0;
		cout << "正在讀進公司" << endl;
		str = "../company.txt";
		while (!feof(fp)){
			fscanf(fp, "%s%ld%ld", comp[i].name, comp[i].init_ast, comp[i].init_lia);
			i++;
		}
		fclose(fp);
		delete fp;

		cout << "請問你要讀第幾間公司? " << endl;
		cin >> num;
		_itoa(num, number, 10);
		cout << "====================" << endl;
		cout << "1 讀進產品" << endl;
		cout << "2 讀進材料" << endl;
		cout << "3 讀進員工" << endl;
		cout << "4 讀進客戶" << endl;
		cout << "5 讀進訂單" << endl;

		cout << "====================" << endl;
		cout << "請問你要讀什麼? " << endl;
		fflush(stdin);
		cin >> choice;
		
		int j = 0;
		char* cust_id = new char[STRMAX];
		switch (choice)
		{
		case 1:
			strcpy(str, "../product");
			strcat(str, number);
			strcat(str, ".txt");
			fopen(str, "r");
			while (!feof(fp)){
				int j = 0;
				fscanf(fp, "%s%ld%ld%s", comp[num].pdt_name + j, *(comp[num].pdt_num + j), *(comp[num].pdt_price + j), comp[num].pdt_date + j);
				j++;
			}
			break;
		case 2:
			strcpy(str, "../material");
			strcat(str, number);
			strcat(str, ".txt");
			fopen(str, "r");
			while (!feof(fp)){
				int j = 0;
				fscanf(fp, "%s%ld%ld%s", comp[num].mtl_name + j, *(comp[num].mtl_num + j), *(comp[num].mtl_price + j), comp[num].mtl_date + j);
				j++;
			}
			break;
		case 3:
			strcpy(str, "../employee");
			strcat(str, number);
			strcat(str, ".txt");
			fopen(str, "r");
			while (!feof(fp)){
				int j = 0;
				fscanf(fp, "%s%ld%ld%s", comp[i].emp_name + j, *(comp[i].emp_sal) + j, comp[i].emp_date + j);
				j++;
			}
			break;
		case 4:
			strcpy(str, "../customer");
			strcat(str, number);
			strcat(str, ".txt");
			fopen(str, "r");
			while (!feof(fp)){
				int b = 0;
				fscanf(fp, "%s%s%s", comp[i].order.cust_name + b, comp[i].order.location + b, comp[i].order.expectedDate + b);
				b++;
			}
			break;
		case 5:
			
			cout << "請輸入顧客編號: " << endl;
			cin >> j;
			_itoa(j, cust_id, 10);
			strcpy(str, "../order");
			strcat(str, number);
			strcat(str, cust_id);
			strcat(str, ".txt");
			fopen(str, "r");
			while (!feof(fp)){
				int b = 0;
				fscanf(fp, "%s%ld%ld", (*(comp[num].order.order_name+j) + b), *(*(comp[num].order.order_num+j) + b), *(*(comp[num].order.order_price+j) + b));
				b++;
			}
			delete cust_id;
			break;
		default:
			break;
		}
			fclose(fp);
			delete fp;
	}
		
};



int _tmain(int argc, _TCHAR* argv[])
{
	bool cont = true;
	bool keep = true;
	int tmp(0);
	int count = 0;
	int j = 0;
	CInformation func = CInformation();
	Cfileio fio = Cfileio();
	Cledger led = Cledger();
	Ccompany comp[STRMAX] = {};
	
	
	
	//while 建立公司物件
	while (keep)
	{
		cout << "= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *=" << endl;
		cout << "Welcome to Accounting System!" << endl << "= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *=" << endl;
		cout << "新增一間公司" << "------------------------------" << endl;
		comp[count].inputCompInfo();
		while (cont){
			cout << "0 結束" << endl;
			cout << "1 新增產品" << endl;
			cout << "2 新增材料" << endl;
			cout << "3 新增員工" << endl;
			cout << "4 新增訂單" << endl;
			cout << "5 查詢總帳" << endl;
			cout << "6 查詢庫存" << endl;
			cout << "7 查詢訂單" << endl;
			cout << "8 查詢顧客" << endl;
			cout << "9 查詢員工" << endl;
			cout << "10 寫入檔案" << endl;
			cout << "11 讀取檔案" << endl;
			cout << "12 修改" << endl;
			cout << "------------------------------" << endl;
			cout << "請問您要做什麼動作? ";
			cin >> tmp;
			switch (tmp)
			{
			case 1:
				comp[count].inputPdtInfo();
				break;
			case 2:
				comp[count].inputMtlInfo();
				break;
			case 3:
				comp[count].inputEmpInfo();
				break;
			case 4:
				comp[count].inputOrderInfo();
				break;
			case 5:
				led.ledger(comp, count);
				break;
			case 6:
				comp[count].info.showInventory(comp[count].countPdt, comp[count].pdt_name, comp[count].pdt_num, comp[count].countMtl, comp[count].mtl_name, comp[count].mtl_num);
				break;
			case 7:
				comp[count].order.showOrder(comp[count].order.cust_num, comp[count].order.countOrder, comp[count].order.cust_name, comp[count].order.order_name, comp[count].order.order_num);
				break;
			case 8:
				comp[count].order.showCustomer(comp[count].order.cust_name, comp[count].order.cust_num, comp[count].order.location);
				break;
			case 9:
				comp[count].showEmployee(comp[count].countEmp, comp[count].emp_name, comp[count].emp_sal, comp[count].emp_date);
				break;
			case 10:
				fio.fileinput(comp, count);
				break;
			case 11:
				fio.fileread(comp);
				break;
			case 12:
				cout << "請輸入您要修改的公司編號: ";
				cin >> j;
				comp[j].modify();
				break;
			case 0:
				cont = false;
				break;
			default:
				break;
			}
		}
		cout << "請問您要新增下一個公司嗎?(1/0) ";
		cin >> keep;
		if (keep)
			count++;
	}	
	return 0;
}



