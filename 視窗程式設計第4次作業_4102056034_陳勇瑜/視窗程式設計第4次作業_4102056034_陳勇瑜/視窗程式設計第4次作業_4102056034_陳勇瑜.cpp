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


using namespace std;
#define STRMAX 30
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((*array)))

class Ccompany{
public:
	//basic info
	char* name = new char[STRMAX];
	long* init_ast = new long;
	long* init_lia = new long;
	char* date = new char[STRMAX];

	//products
	int countPdt;
	char* pdt_name = new char[STRMAX];
	long* pdt_num = new long;
	long* pdt_price = new long;
	char** pdt_need = new char*[STRMAX];
	char* pdt_date = new char[STRMAX];
	long pdt_total = 0;

	//employees
	int countEmp;
	char* emp_name = new char[STRMAX];
	char* emp_date = new char[STRMAX];
	long* emp_num = new long;
	long* emp_sal = new long;
	long emp_total = 0;

	//material
	int countMtl;
	char* mtl_name = new char[STRMAX];
	char* mtl_date = new char[STRMAX];
	long* mtl_num = new long(0);
	long* mtl_price = new long(0);
	long mtl_total = 0;

	

	void inputCompInfo(){
		cout << "Add a company" << endl;
		cout << "<Basic Information>" << endl;
		cout << "company name: ";
		cin.getline(name, STRMAX);
		cout << "initial assets: ";
		cin >> *init_ast;
		cout << "initial liabilities: ";
		cin >> *init_lia;
	};
	void inputPdtInfo(){
		cout << "How many items?: ";
		cin >> countPdt;
		int j = 0;
		int i = 0;
		bool cont = false;
		while (j < countPdt)

		{
			cout << "product name: ";
			cin.getline((pdt_name + j), STRMAX);
			cout << "product number: ";
			cin >> *(pdt_num + j);
			cout << "product price: ";
			cin >> *(pdt_price + j);
			//�w�q�C�����~�һݭn�����
			while (cont){
				cout << "�����~�һݭn������: " << endl;
				cin >> (*(pdt_need+j) + i);
				cout << "�٭n�~���J����?(true/false): " << endl;
				cin >> cont;
				if (cont){
					i++;
				}
			}
			cin >> "date(ie: 2015/12/26): ";
			cout << pdt_date+j << endl;
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
			cout << "employee's name: ";
			cin.getline((emp_name)+j, STRMAX);
			cout << "employee's salary: ";
			cin >> *(emp_sal + j);
			cin >> "date(ie: 2015/12/26): ";
			cout << emp_date + j << endl;
			cout << "----------------" << endl;
			emp_total += *(emp_sal + j);
		}
	}
	void inputMtlInfo(){
		cout << "How many materials?: ";
		cin >> countMtl;
		for (int j = 0; j < countMtl; j++)
		{
			cout << "material's name: ";
			cin.getline((mtl_name)+j, STRMAX);
			cout << "number: ";
			cin >> *(mtl_num + j);
			cout << "price: ";
			cin >> *(mtl_price + j);
			cout << "date(ie: 2015/12/26): " << endl;
			cin >> mtl_date + j;
			cout << "----------------" << endl;
			mtl_total += (long)(*(mtl_num + j)) * (*(mtl_price + j));

		}
	}
	
};

class Corder{
	
	int countOrder;
	char* cust_name = new char[STRMAX];
	int cust_num;
	char* location = new char[STRMAX];
	char** order_name = new char*[STRMAX];
	long** order_num = new long*(0);
	long* order_price = new long(0);
	long order_total;
	char* expectedDate = new char[STRMAX];
	bool cont_order = true;

	void inputOrderInfo(){

		while (cont_order){
			cout << "customer's name: ";
			cin.getline(cust_name+cust_num, STRMAX);
			cout << "location(ie: 402�x�����n�ϰ����250��): ";
			cin >> location;
			cout << "How many orders?: ";
			cin >> countOrder;
			for (int j = 0; j < countOrder; j++)
			{
				cout << "product name: " << endl;
				cin >> *(order_name+cust_num) + j;
				cout << "product number: " << endl;
				cin >> *(*(order_num+cust_num) + j);
				cout << "product price: " << endl;
				cin >> *(order_price + j);
				cout << "expected date(ie: 2015/12/26): " << endl;
				cin >> expectedDate + j;
				cout << "----------------" << endl;
				order_total = *(*(order_num+cust_num) + j)**(order_price + j);
			}
			cout << "�O�_�~���J�q��?(true/false): ";
			cin >> cont_order;
			if (cont_order){
				cust_num++;
			}

		}
		showOrder(cust_num ,countOrder, cust_name, order_name, order_num);
		
	}
	void showOrder(int cust_num,int countOrder, char* cust_name, char** order_name, long** order_num){
		cout << "=====================================" << endl;
		cout << "=             ORDER                 =" << endl;
		cout << "=====================================" << endl;
		for (int i = 0; i < cust_num; i++){
			cout << cust_name + cust_num << endl;
			for (int j = 0; j < ARRAY_SIZE(*(order_name + cust_num)); j++){
				cout << (*(order_name + cust_num) + j) << "\t" << (*(order_num + cust_num) + j) << endl;
			}
		}
		cout << "=====================================" << endl;
	}
};

	



	class CInformation{
	
		void swapStr(char* str1, char* str2){
			char* temp = str1;
			str1 = str2;
			str2 = temp;
			delete temp;
		}
		void swapLong(long* long1, long* long2){
			long* temp = long1;
			long1 = long2;
			long2 = temp;
			delete temp;
		}
		void sortStr(char* STR){
			for (int i = 0; i < ARRAY_SIZE(STR); i++){
				for (int j = i + 1; j < ARRAY_SIZE(STR); j++){
					if (strcmp(STR + i, STR + j)){
						swapStr(STR + i, STR + j);
					}
				}
			}
		}
		void sortLong(long* LONG){
			for (int i = 0; i < ARRAY_SIZE(LONG); i++){
				for (int j = i + 1; j < ARRAY_SIZE(LONG); j++){
					if (*(LONG + i) > *(LONG + j)){
						swapLong(LONG + i, LONG + j);
					}
				}
			}
		}
		void ledger(long* init_ast, long* init_lia, char* name, long* pdt_total, long* emp_total, long* mtl_total){
			cout << "===============================" << endl;
			cout << "name" << "\t" << "ASSET" << "\t" << "LIABILITY" << "\t" << "REVENUE" << "\t" << "EXPENSE" << endl;
			for (int i = 0; i < ARRAY_SIZE(name); i++){
				cout << name + i << "\t" << *(init_ast + i) + *(pdt_total + i) << "\t" << *(init_lia + i) + *(emp_total + i) + *(mtl_total + i) << "\t" << *(pdt_total + i) << "\t" << *(emp_total + i) + *(mtl_total + i);
			}
			cout << "===============================" << endl;
		}
		void billing(char* cust_name, long* order_name, long* order_num, long order_totoal, int countOrder){
			cout << "+++++++++++++++++++++++++++++++" << endl;
			cout << "    HELLO " << cust_name << ", This is your receipt!" << endl <<endl;
			for (int i = 0; i < countOrder; i++){
				cout << order_name + i << "\t" << "X " << *(order_num + i)<<endl;
			}
			cout << "-------------------------------" << endl;
			cout << "Total: " << order_totoal;
		}
		void inventory(int countPdt, char* pdt_name, long* pdt_num, char** pdt_need, int countOrder,char* order_pdt, long* order_num, int countMtl, char* mtl_name, long* mtl_num){
			
			//�C��input order�Ncall�@�� �p��Ѿlpdt
			//�C��input order�Ncall�@�� �p��Ѿlmtl
			for (int i=0;i<countOrder;i++){
				for (int j = 0; j < countPdt; j++){
					if (strcmp(order_pdt + i, pdt_name + j)){
						*(pdt_num + j) -= *(order_num + i);
						for (int k = 0; k < ARRAY_SIZE(*(pdt_need + j)); k++){
							for (int l = 0; l < countMtl; l++){
								*(mtl_num + l) -= 1;
							}
						}
					}					
				}					
			}
			
			//�L�XInventory
			cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
			cout << "                PRODUCT                    " << endl;
			//�L�X�w�sproduct
			for (int i = 0; i < countPdt; i++){
				cout << pdt_name + i << "\t" << *(pdt_num + i)<<endl;
			}
			cout << endl << "                Materials                    " << endl;
			for (int i = 0; i < countMtl; i++){
				cout << mtl_name + i << "\t" << *(mtl_num + i) << endl;
			}

			//�p��Ѿl����ƥi���h��product

			
		}
		


	};




	int _tmain(int argc, _TCHAR* argv[])
	{
		return 0;
	}



