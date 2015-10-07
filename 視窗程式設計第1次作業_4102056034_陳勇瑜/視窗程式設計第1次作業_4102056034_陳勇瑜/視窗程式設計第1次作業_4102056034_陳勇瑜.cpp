
/***********************
視窗程式設計第一次作業:

project: Accounting system
name: 陳勇瑜
studentID: 4102056034
deadline: 2015/10/7
require: using pointer
************************/

#include "stdafx.h"
#include "iostream"
using std::cout;
using std::cin;
using std::endl;
using namespace std;
#define STRMAX 30

	
	//宣告Company相關變數
	char* name = new char[STRMAX];
	long* init_ast = new long;
	long* init_lia = new long;
	long* asset = new long(0);
	long* liab = new long(0);
	long* rev = new long(0);
	long* pro = new long(0);
	
	//各項金錢小結
	long* tot_pdt = new long(0);
	long* tot_emp = new long(0);
	long* tot_mtl = new long(0);
	
	int* countPdt = new int;

	//宣告FUNCTION
	void inputInfoCOM(char* name, long* init_asset, long* init_liab, FILE* fp);
	void inputInfoPdc(char** pdt_name, int** pdt_num, long** pdt_price, FILE* fp);
	void inputInfoEmp(char** emp_name, long** sal, FILE* fp);
	void inputInfoMtl(char** mtl_name, int** mtl_num, long** mtl_price, FILE* fp);
	void ledger(int* comp_num);
	void billing(char* pdt_name, int* pdt_num, long* pdt_price);

int _tmain(int argc, _TCHAR* argv[])
{   
	//宣告Product相關變數
		char** pdt_name = new char*[STRMAX];
		*pdt_name = new char[STRMAX];
		int** pdt_num = new int*;
		*pdt_num = new int(0);
		long** pdt_price = new long*;
		*pdt_price = new long(0);
		

	
	//宣告Employee相關變數
		char** emp_name = new char*[STRMAX];
		*emp_name = new char;
		long** sal = new long*;
		*sal = new long(0);

	//宣告Material相關變數
		char** mtl_name = new char*[STRMAX];
		*mtl_name = new char[STRMAX];
		int** mtl_num = new int*;
		*mtl_num = new int(0);
		long** mtl_price = new long*;
		*mtl_price = new long(0);
	
	
	bool cont = true;
	int *i = new int(0);

	//start account system
		cout << "**************************" << endl
		<< "Welcome to Accounting System!" << endl
		<< "**************************" << endl;
		FILE* fp;
		fp = fopen("../information.txt", "w");
	while(cont){
		
		 //input information  
		inputInfoCOM((name+*i), (init_ast+*i), (init_lia+*i), fp);//開始填寫公司
		cout << "#############" << endl << "<recieve>" << endl; //開始填寫歲入
		inputInfoPdc((pdt_name + *i), (pdt_num + *i), (pdt_price + *i), fp);
		cout << "#############" << endl << "<pay>" << endl; //開始填寫歲出
		inputInfoEmp((emp_name + *i), (sal+*i), fp);//員工
		inputInfoMtl((mtl_name + *i), (mtl_num + *i), (mtl_price + *i), fp);//耗材料

		

		//計算總帳
		*(asset+*i) = *tot_pdt;
		*(liab+*i) = *tot_emp + *tot_mtl;
		*(pro+*i) = *asset - *liab;
		*(rev+*i) = *pro + *(init_ast+*i) - *(init_lia+*i);

		//印出發票
		billing(*(pdt_name +*i), *(pdt_num + *i), *(pdt_price + *i));

		//開始印出目前總帳

		ledger(i);

		//判斷是否輸入下一間公司
		cout << "是否要繼續?[1/0]: ";
		bool* ConOrNot = new bool;
		cin >> *(ConOrNot);
		fflush(stdin);

		if (*(ConOrNot)){
			cont = true;
			*i ++;
		}
		else{
			cont = false;
		}
	}	

	//exception
	if (fp == NULL)
	{
		fprintf(stderr, "打不開檔案啦!\n");
		exit(1);
	}
	fclose(fp);
	
	return 0;
}


void inputInfoCOM(char* name, long* init_asset, long* init_liab, FILE* fp)
{
	//新增一個company
	cout << "Add a company" << endl;
	cout << "<Basic Information>" << endl;
	cout << "company name: ";
	cin.getline(name, STRMAX);
	cout << "initial assets: ";
	cin >> *init_asset;
	cout << "initial liabilities: ";
	cin >> *init_liab;

	fprintf(fp, "<Basic Information>\n");
	fprintf(fp, "company name: %s\t initial assets: %ld \t initial liabilities: %ld \n", name, (*init_asset), (*init_liab));
}
void inputInfoPdc(char** pdt_name, int** pdt_num, long** pdt_price, FILE* fp)
{   //新增產品
	cout << "How many items?: " << endl;
	cin >> *countPdt;
	int* j = new int(0);
	while (*j<*countPdt)
	{
		fflush(stdin);
		cout << "product name: ";
		cin.getline( ((*pdt_name)+ *j), STRMAX);
		cout << "product number: ";
		cin >> *((*pdt_num)+ *j) ;
		cout << "product price: ";
		cin >> *((*pdt_price) + *j);
		cout << "----------------" << endl;
		*tot_pdt += (*((*pdt_price) + *j)) * (long)(*((*pdt_num) + *j));

		fprintf(fp, "product name: %s\t product number: %ld \t product price: %ld \n", ((*pdt_name) + *j), (*((*pdt_num) + *j)), (*((*pdt_price) + *j)));
		(*j)++;
	}

	fprintf(fp, "-----------------------------------------\n");
	delete j;
}	
void inputInfoEmp(char** emp_name, long** sal, FILE* fp)
{	//新增EMPlOYEE
	int* count=new int(0);
	int* j = new int(0);
	cout << "How many employees?: ";
	cin >> *count;

	for (*j = 0; *j < *count; (*j)++)
	{
		fflush(stdin);
		cout << "employee's name: ";
		cin.getline((*emp_name)+*j, STRMAX);
		cout << "employee's salary: ";
		cin >> *((*sal) + *j);
		cout << "----------------" << endl;
		*tot_emp += *((*sal) + *j);
		fprintf(fp, "employee's name: %s\t employee's salary: %ld\n", (*emp_name) + *j, (*((*sal) + *j)));
	}
	fprintf(fp, "-----------------------------------------\n");
	delete j;
}
void inputInfoMtl(char** mtl_name, int** mtl_num, long** mtl_price, FILE* fp)
{	//新增MATERIAL
	int *count = new int(0);
	int* j = new int(0);
	cout << "How many materials?: ";
	cin >> *count;
	for (*j=0 ; *j< *count; (*j)++)
	{
		fflush(stdin);
		cout << "material's name: ";
		cin.getline((*mtl_name)+ *j, STRMAX);
		cout << "number: ";
		cin >> *((*mtl_num)+ *j);
		cout << "price: ";
		cin >> *((*mtl_price)+ *j);
		cout << "----------------" << endl;
		*tot_mtl += (long)(*((*mtl_num) + *j)) * (*((*mtl_price) + *j));
		fprintf(fp, "material's name: %s\t material's number: %ld \t material's price: %ld \n", (*mtl_name) + *j, (*((*mtl_num) + *j)), (*((*mtl_price) + *j)));
	}
	fprintf(fp, "-----------------------------------------\n");
	delete j;
}
void ledger(int *comp_num)
{
	int *j = new int(0);
	cout << "+++++++++++++++++" << endl
		<< "公司名稱" << "\t" << "總收入" << "\t" << "總支出" << "\t" << "盈餘" << "\t" << "公司總價" << endl
		<< "+++++++++++++++++" << endl;
	for (*j = 0; *j <= *comp_num; (*j)++)
	{
		cout << (name + *j) << "\t\t" << *(asset + *j) << "\t" << *(liab+*j) << "\t" << *(pro+*j) << "\t" << *(rev+*j) << endl;
	}
	cout << "+++++++++++++++++" << endl;
	delete j;
}
void billing(char* pdt_name, int* pdt_num, long* pdt_price)
{
	int *j = new int(0);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl
		<< "~ 親愛的客人 這是您的帳單 ~" << endl;
	cout << "~ 您的購買清單:         ~" << endl;
	for (*j=0; *j < *countPdt; (*j)++)
	{
		cout << "~ " << pdt_name+*j << "\t" << *(pdt_num+*j) << "x" << *(pdt_price+*j)<< " ~" << endl;
		cout << "~ " << "\t\t\t" << "total: " << *tot_pdt << " ~" << endl;
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
