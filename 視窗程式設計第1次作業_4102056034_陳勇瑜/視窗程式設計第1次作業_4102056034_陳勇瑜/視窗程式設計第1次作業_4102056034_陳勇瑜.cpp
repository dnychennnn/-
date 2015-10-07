
/***********************
�����{���]�p�Ĥ@���@�~:

project: Accounting system
name: ���i��
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

	
	//�ŧiCompany�����ܼ�
	char* name = new char[STRMAX];
	long* init_ast = new long;
	long* init_lia = new long;
	long* asset = new long(0);
	long* liab = new long(0);
	long* rev = new long(0);
	long* pro = new long(0);
	
	//�U�������p��
	long* tot_pdt = new long(0);
	long* tot_emp = new long(0);
	long* tot_mtl = new long(0);
	
	int* countPdt = new int;

	//�ŧiFUNCTION
	void inputInfoCOM(char* name, long* init_asset, long* init_liab, FILE* fp);
	void inputInfoPdc(char** pdt_name, int** pdt_num, long** pdt_price, FILE* fp);
	void inputInfoEmp(char** emp_name, long** sal, FILE* fp);
	void inputInfoMtl(char** mtl_name, int** mtl_num, long** mtl_price, FILE* fp);
	void ledger(int* comp_num);
	void billing(char* pdt_name, int* pdt_num, long* pdt_price);

int _tmain(int argc, _TCHAR* argv[])
{   
	//�ŧiProduct�����ܼ�
		char** pdt_name = new char*[STRMAX];
		*pdt_name = new char[STRMAX];
		int** pdt_num = new int*;
		*pdt_num = new int(0);
		long** pdt_price = new long*;
		*pdt_price = new long(0);
		

	
	//�ŧiEmployee�����ܼ�
		char** emp_name = new char*[STRMAX];
		*emp_name = new char;
		long** sal = new long*;
		*sal = new long(0);

	//�ŧiMaterial�����ܼ�
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
		inputInfoCOM((name+*i), (init_ast+*i), (init_lia+*i), fp);//�}�l��g���q
		cout << "#############" << endl << "<recieve>" << endl; //�}�l��g���J
		inputInfoPdc((pdt_name + *i), (pdt_num + *i), (pdt_price + *i), fp);
		cout << "#############" << endl << "<pay>" << endl; //�}�l��g���X
		inputInfoEmp((emp_name + *i), (sal+*i), fp);//���u
		inputInfoMtl((mtl_name + *i), (mtl_num + *i), (mtl_price + *i), fp);//�ӧ���

		

		//�p���`�b
		*(asset+*i) = *tot_pdt;
		*(liab+*i) = *tot_emp + *tot_mtl;
		*(pro+*i) = *asset - *liab;
		*(rev+*i) = *pro + *(init_ast+*i) - *(init_lia+*i);

		//�L�X�o��
		billing(*(pdt_name +*i), *(pdt_num + *i), *(pdt_price + *i));

		//�}�l�L�X�ثe�`�b

		ledger(i);

		//�P�_�O�_��J�U�@�����q
		cout << "�O�_�n�~��?[1/0]: ";
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
		fprintf(stderr, "�����}�ɮװ�!\n");
		exit(1);
	}
	fclose(fp);
	
	return 0;
}


void inputInfoCOM(char* name, long* init_asset, long* init_liab, FILE* fp)
{
	//�s�W�@��company
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
{   //�s�W���~
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
{	//�s�WEMPlOYEE
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
{	//�s�WMATERIAL
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
		<< "���q�W��" << "\t" << "�`���J" << "\t" << "�`��X" << "\t" << "�վl" << "\t" << "���q�`��" << endl
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
		<< "~ �˷R���ȤH �o�O�z���b�� ~" << endl;
	cout << "~ �z���ʶR�M��:         ~" << endl;
	for (*j=0; *j < *countPdt; (*j)++)
	{
		cout << "~ " << pdt_name+*j << "\t" << *(pdt_num+*j) << "x" << *(pdt_price+*j)<< " ~" << endl;
		cout << "~ " << "\t\t\t" << "total: " << *tot_pdt << " ~" << endl;
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
