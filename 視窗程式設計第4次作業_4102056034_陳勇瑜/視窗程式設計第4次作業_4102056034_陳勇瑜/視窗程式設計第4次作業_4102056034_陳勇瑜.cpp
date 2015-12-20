// �����{���]�p��4���@�~_4102056034_���i��.cpp : �w�q�D���x���ε{�����i�J�I�C
//

/***************************
4102056034 ���i�� ��4���@�~ 11/20
***************************/

/***********************
�����{���]�p��4���@�~:

project: Accounting system
name: ���i��
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
		cout << "1 �̷ӦW�r" << endl << "2 �̷��ʶR�ƶq" << endl;
		cout << "�аݱz�Q���ƦC�z���o��?: ";
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
		cout << "1 �̷ӦW�r" << endl << "2 �̷��`�겣" << endl;
		cout << "�аݱz�Q���ƦC�z���w�s(���~)?: ";
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
		cout << "1 �̷ӦW�r" << endl << "2 �̷��`�겣" << endl;
		cout << "�аݱz�Q���ƦC�z���w�s(����)?: ";
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
		cout << "1 �̷ӫȤ�W" << endl << "2 �Ȥ�a�}" << endl;
		cout << "�аݱz�Q���ƦC�q��?: ";
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
		cout << "1 �̷ӭ��u�W�r" << endl << "2 �̷ӭ��u�~��" << endl;
		cout << "�аݱz�Q���ƦC�z���w�s(���~)?: ";
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
		cout << "1 �̷ӫȤ�W" << endl << "2 �̷Ӳ��~�W" << endl << "3 �̷Ӳ��~�ƶq";
		cout << "�аݱz�Q���ƦC�q��?: ";
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
		//�C��input order�Ncall�@�� �p��Ѿlpdt
		//�C��input order�Ncall�@�� �p��Ѿlmtl
		for (int i = 0; i < countOrder; i++){
			for (int j = 0; j < countPdt; j++){
				if (strcmp(((*order_name) + i), pdt_name + j)){
					*(pdt_num + j) -= *(*order_num + i);
					for (int k = 0; k < ARRAY_SIZE(*(pdt_need + j)); k++){
						for (int l = 0; l < countMtl; l++){
							*(mtl_num + l) -= 1; //����MATERIAL
							//�P�_�ܮw�i���h�ֲ��~
							if (strcmp(*(pdt_need + j), mtl_name + l)){
								if (*(mtl_num + l) < min)
									min = *(mtl_num + l);
							}

						}
						cout << "�ܮw�٦�: " << min << "��" << pdt_name + j;
					}
				}
			}
		}
		
	}
	void showInventory(int countPdt, char* pdt_name, long* pdt_num, int countMtl, char* mtl_name, long* mtl_num){
		sortPdt(pdt_name, pdt_num);
		//�L�XInventory
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
		cout << "                PRODUCT                    " << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;

		//�L�X�w�sproduct
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
			//�w�q�C�����~�һݭn�����
			while (cont){
				fflush(stdin);
				cout << "�����~�һݭn������: ";
				*(pdt_need + j) = new char[STRMAX];
				cin.getline(*(pdt_need + j) + i, STRMAX);
				cout << "�٭n�~���J����?(1/0): ";
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
			cout << "location(ie: 402�x�����n�ϰ����250��): ";
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
			cout << "�O�_�~���J�q��?(1/0): ";
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
		cout << "1 ���q" << endl;
		cout << "2 ���~" << endl;
		cout << "3 ����" << endl;
		cout << "4 ���u" << endl;
		cout << "5 �U��" << endl;
		cout << "6 �q��" << endl;
		cout << "=================" << endl;
		int choice=0;
		int j = 0;
		int k = 0;
		switch (choice)
		{
		case 1:
			cout << "���q�W: ";
			cin.getline(name, STRMAX);
			cout << "��l�겣: ";
			cin >> init_ast;
			cout << "��l�t��: ";
			cin >> init_lia;
			break;
		case 2:
			for (int i = 0; i <= countPdt; i++){
				cout << i << " " << pdt_name+i << endl;
			}
			cout << "�п�J�z�n�ק諸���~�s��: ";
			cin >> j;
			cout << "���~�W: ";
			cin.getline((pdt_name + j), STRMAX);
			cout << "���~��: ";
			cin >> *(pdt_num + j);
			cout << "���~���: ";
			break;
		case 3:
			
			for (int i = 0; i <= countMtl; i++){
				cout << i << " " << mtl_name+i << endl;
			}
			cout << "�п�J�z�n�ק諸���ƽs��: ";
			cin >> j;
			cout << "���ƦW: ";
			cin >> mtl_name + j;
			cout << "���Ƽ�: ";
			cin >> *(mtl_num + j);
			cout << "���Ƴ��: ";
			cin >> *(mtl_price + j);
			cout << "���(ie: 2015/12/26): " << endl;
			cin >> mtl_date + j;
			break;
		case 4:
			
			for (int i = 0; i <= countEmp; i++){
				cout << i << " " << emp_name+i << endl;
			}
			cout << "�п�J�z�n�ק諸���u�s��: ";
			cin >> j;
			cout << "���u�W: ";
			cin.getline((emp_name)+j, STRMAX);
			cout << "���u�~��: ";
			cin >> *(emp_sal + j);
			cout << "���(ie: 2015/12/26): ";
			cin >> emp_date + j;
			break;
		case 5:
			
			for (int i = 0; i <= order.cust_num; i++){
				cout << i << " " << order.cust_name + i << endl;
			}
			cout << "�п�J�z�n�ק諸�U�Ƚs��: ";
			cin >> j;
			cout << "�U�ȦW: ";
			cin.getline(order.cust_name + j, STRMAX);
			cout << "�a�}(ie: 402�x�����n�ϰ����250��): ";
			cin.getline(order.location + j, STRMAX);
			cout << "���f���(ie: 2015/12/26): " << endl;
			cin.getline((order.expectedDate + j), STRMAX);
			break;
		case 6:
			cout << "�п�J�z�n�ק諸�U�Ƚs��: ";
			cin >> j;
			cout << "�п�J�z�n�ק諸�q��s��: ";
			cin >> k;
			cout << "���~�W: " << endl;
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
		cout << "1 �̷ӦW�r" << endl << "2 �̷��`�겣" << endl << "3 �̷��`�t��" << endl;
		cout << "�аݱz�Q���ƦC�z���`�b?: ";
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
			fprintf(stderr, "�����}�ɮװ�!\n");
			exit(1);
		}
		//write company
		for (int i = 0; i <= count; i++){
			fprintf(fp, "%s\t%ld\t%ld\n", comp[i].name, comp[i].init_ast, comp[i].init_lia); //���q
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (int j = 0; j < comp[i].countPdt; j++){
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].pdt_name + j, *(comp[i].pdt_num + j), *(comp[i].pdt_price + j), comp[i].pdt_date + j); //���~
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (int j = 0; j < comp[i].countPdt; j++){
				for (int k = 0; k < ARRAY_SIZE(comp[i].pdt_need+j); k++){
					fprintf(fp, "%s\t", *(comp[i].pdt_need + j)+k); //�Ӳ��~�һݭ��
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (int l = 0; l < comp[i].countMtl; l++)
			{
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].mtl_name + l, *(comp[i].mtl_num + l), *(comp[i].mtl_price + l), comp[i].mtl_date + l); //���
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (int a = 0; a < comp[i].countEmp; a++){
				fprintf(fp, "%s\t%ld\t%ld\t%s\n", comp[i].emp_name+a, *(comp[i].emp_sal+a), comp[i].emp_date+a); //���u
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (int b = 0; b <= comp[i].order.cust_num; b++){
				fprintf(fp, "%s\t%s\t%s\t\n", comp[i].order.cust_name+b, comp[i].order.location+b, comp[i].order.expectedDate+b); //�U��
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
				fprintf(stderr, "�����}�ɮװ�!\n");
				exit(1);
			}
			for (j = 0; j <= comp[i].order.cust_num; j++){
				_itoa(j, cust_id, 10);
				strcat(str, cust_id);
				strcat(str, ".txt");
				fp = fopen(str, "w");
				for (int b = 0; b <= comp[i].order.countOrder; b++){
					fprintf(fp, "%s\t%ld\t%ld\n", *(comp[i].order.order_name + j)+b, *(*(comp[i].order.order_num+j)+ b), *(*(comp[i].order.order_price+j)+ b)); //���U�ȩҭq�����~
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
		cout << "���bŪ�i���q" << endl;
		str = "../company.txt";
		while (!feof(fp)){
			fscanf(fp, "%s%ld%ld", comp[i].name, comp[i].init_ast, comp[i].init_lia);
			i++;
		}
		fclose(fp);
		delete fp;

		cout << "�аݧA�nŪ�ĴX�����q? " << endl;
		cin >> num;
		_itoa(num, number, 10);
		cout << "====================" << endl;
		cout << "1 Ū�i���~" << endl;
		cout << "2 Ū�i����" << endl;
		cout << "3 Ū�i���u" << endl;
		cout << "4 Ū�i�Ȥ�" << endl;
		cout << "5 Ū�i�q��" << endl;

		cout << "====================" << endl;
		cout << "�аݧA�nŪ����? " << endl;
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
			
			cout << "�п�J�U�Ƚs��: " << endl;
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
	
	
	
	//while �إߤ��q����
	while (keep)
	{
		cout << "= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *=" << endl;
		cout << "Welcome to Accounting System!" << endl << "= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *= *=" << endl;
		cout << "�s�W�@�����q" << "------------------------------" << endl;
		comp[count].inputCompInfo();
		while (cont){
			cout << "0 ����" << endl;
			cout << "1 �s�W���~" << endl;
			cout << "2 �s�W����" << endl;
			cout << "3 �s�W���u" << endl;
			cout << "4 �s�W�q��" << endl;
			cout << "5 �d���`�b" << endl;
			cout << "6 �d�߮w�s" << endl;
			cout << "7 �d�߭q��" << endl;
			cout << "8 �d���U��" << endl;
			cout << "9 �d�߭��u" << endl;
			cout << "10 �g�J�ɮ�" << endl;
			cout << "11 Ū���ɮ�" << endl;
			cout << "12 �ק�" << endl;
			cout << "------------------------------" << endl;
			cout << "�аݱz�n������ʧ@? ";
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
				cout << "�п�J�z�n�ק諸���q�s��: ";
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
		cout << "�аݱz�n�s�W�U�@�Ӥ��q��?(1/0) ";
		cin >> keep;
		if (keep)
			count++;
	}	
	return 0;
}



