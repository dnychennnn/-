
/***********************
視窗程式設計第一次作業:

project: Accounting system
name: 陳勇瑜
studentID: 4102056034
deadline: 2015/10/7
require: using pointer
************************/

#include "stdafx.h"
#include "stdio.h"
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
	
	int* countPdt = new int(0);
	int* countEmp = new int(0);
	int *countMtl = new int(0);

	//宣告FUNCTION
	void inputInfoCOM(char* name, long* init_asset, long* init_liab, FILE* fp);
	void inputInfoPdc(char* pdt_name, int* pdt_num, long* pdt_price, FILE* fp);
	void inputInfoEmp(char* emp_name, long* sal, FILE* fp);
	void inputInfoMtl(char* mtl_name, int* mtl_num, long* mtl_price, FILE* fp);
	void ledger(int* comp_num);
	void billing(char* pdt_name, int* pdt_num, long* pdt_price);

int _tmain(int argc, _TCHAR* argv[])
{   
	//宣告Product相關變數
		char* pdt_name = new char[STRMAX];
		int* pdt_num = new int;
		long* pdt_price = new long;
	
	//宣告Employee相關變數
		char* emp_name = new char[STRMAX];
		long* sal = new long;

	//宣告Material相關變數
		char* mtl_name = new char[STRMAX];
		int* mtl_num = new int;
		long* mtl_price = new long;

		bool cont = true;
		int *j = new int(0);
		int *comp_num = new int(0);
		int *i = new int(0); //INDEX
		char* var = new char[STRMAX]; //用來存不要的資訊

	//start account system
		cout << "**************************" << endl
		<< "Welcome to Accounting System!" << endl
		<< "**************************" << endl;
		FILE* fp;
		
	while(cont){
		char* comp = new char[STRMAX];
		char* str = new char[STRMAX];
		strcpy(str, "../information");
		_itoa(*comp_num, comp, 10);
		strcat(str,comp);
		strcat(str, ".txt");
		fp = fopen(str, "w");
		
		//exception
		if (fp == NULL)
		{
			fprintf(stderr, "打不開檔案啦!\n");
			exit(1);
		}

		//input information  
		inputInfoCOM(name, init_ast, init_lia, fp);//開始填寫公司
		cout << "#############" << endl << "<recieve>" << endl; //開始填寫歲入
		inputInfoPdc(pdt_name, pdt_num, pdt_price, fp);
		cout << "#############" << endl << "<pay>" << endl; //開始填寫歲出
		inputInfoEmp(emp_name, sal, fp);//員工
		inputInfoMtl(mtl_name, mtl_num, mtl_price, fp);//耗材料
		fclose(fp);

		//讀檔
		fp = fopen(str, "r");
		fscanf(fp, "%s%s", var, var);
		fscanf(fp, "%s%s%s%ld%s%ld", var, name+(*comp_num), var, &(*init_ast), var, &(*init_lia));
		fscanf(fp, "%d", &(*countPdt));
		
		for (*i = 0; *i < *countPdt;(*i)++)
		{
			fscanf(fp, "%s%s%s%ld%s%ld", var, (pdt_name+(*i)), var, &(*(pdt_num +(*i))), var, &(*(pdt_price+(*i))));
		}
		fscanf(fp, "%d", &(*countEmp));
		cout << *countEmp;
		for (*i = 0; *i < *countEmp; (*i)++)
		{	
			fscanf(fp, "%s%s%s%ld", var, (emp_name+(*i)), var, &(*(sal+(*i))));
		}
		fscanf(fp, "%d", &(*countMtl));
		for (*i = 0; *i < *countMtl; (*i)++)
		{
			fscanf(fp, "%s%s%s%ld%s%ld", var, (mtl_name+(*i)), var, &(*(mtl_num+(*i))), var, &(*(mtl_price+(*i))));
		}
		fclose(fp);
		//計算總帳
		*(asset + (*comp_num)) = *tot_pdt;
		*(liab + (*comp_num)) = *tot_emp + *tot_mtl;
		*(pro + (*comp_num)) = *asset - *liab;
		*(rev + (*comp_num)) = *pro + *(init_ast)-*(init_lia);
		
		//印出發票
		billing(pdt_name, pdt_num, pdt_price);

		//開始印出目前總帳
		ledger(comp_num);

		//判斷是否輸入下一間公司
		cout << "是否要繼續?[1/0]: ";
		bool* ConOrNot = new bool;
		cin >> *(ConOrNot);
		fflush(stdin);

		if (*(ConOrNot)){
			cont = true;
			(*comp_num)++;
		}
		else{
			cont = false;
		}
		

	}	
		

	
	
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
	fprintf(fp, "company_name: %s\t initial_assets: %ld\t initial_liabilities: %ld\n", name, (*init_asset), (*init_liab));
}
void inputInfoPdc(char* pdt_name, int* pdt_num, long* pdt_price, FILE* fp)
{   //新增產品
	cout << "How many items?: ";
	cin >> *countPdt;
	fprintf(fp, "%d\n", *countPdt);
	int* j = new int(0);
	while ((*j) < (*countPdt))
	{
		fflush(stdin);
		cout << "product name: ";
		cin.getline((pdt_name + *j), STRMAX);
		cout << "product number: ";
		cin >> *(pdt_num + *j);
		cout << "product price: ";
		cin >> *(pdt_price + *j);
		cout << "----------------" << endl;
		*tot_pdt += (*(pdt_price + *j)) * (long)(*(pdt_num + *j));
		fprintf(fp, "product_name: %s\t product_number: %ld\t product_price: %ld\n",(pdt_name + *j), (*(pdt_num + *j)), (*(pdt_price + *j)));
		(*j)++;
	}
	delete j;
}	
void inputInfoEmp(char* emp_name, long* sal, FILE* fp)
{	//新增EMPlOYEE
	int* j = new int(0);
	cout << "How many employees?: ";
	cin >> *countEmp;
	fprintf(fp, "%d\n", *countEmp);
	for (*j = 0; *j < *countEmp; (*j)++)
	{
		fflush(stdin);
		cout << "employee's name: ";
		cin.getline((emp_name)+*j, STRMAX);
		cout << "employee's salary: ";
		cin >> *(sal + *j);
		cout << "----------------" << endl;
		*tot_emp += *(sal + *j);
		fprintf(fp, "employee's_name: %s\t employee's_salary: %ld\n",(emp_name)+*j, (*(sal + *j)));
	}
	delete j;
}
void inputInfoMtl(char* mtl_name, int* mtl_num, long* mtl_price, FILE* fp)
{	//新增MATERIAL
	int* j = new int(0);

	cout << "How many materials?: ";
	cin >> *countMtl;
	fprintf(fp, "%d\n", *countMtl);
	for (*j=0 ; *j< *countMtl; (*j)++)
	{
		fflush(stdin);
		cout << "material's name: ";
		cin.getline( (mtl_name)+*j, STRMAX);
		cout << "number: ";
		cin >> *(mtl_num + *j);
		cout << "price: ";
		cin >> *(mtl_price + *j);
		cout << "----------------" << endl;
		*tot_mtl += (long)(*(mtl_num + *j)) * (*(mtl_price + *j));
		
		fprintf(fp, "material's_name: %s\t material's_number: %ld\t material's_price: %ld\n", mtl_name + *j, (*(mtl_num + *j)), (*(mtl_price + *j)));
	}
	delete j;
}
void ledger(int* comp_num)
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
		<< "~ 親愛的客人 這是您的帳單 " << endl;
	cout << "~ 您的購買清單:         " << endl;
	for (*j=0; *j < *countPdt; (*j)++)
	{
		cout << "~ " << (pdt_name)+*j << "\t" << *(pdt_num+*j) << "x" << *(pdt_price+*j)<< " ~" << endl;
	}
	cout << "~ " << "\t\t\t" << "total: " << *tot_pdt << " ~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
