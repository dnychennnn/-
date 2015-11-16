// �����{���]�p��2���@�~_4102056034_���i��.cpp: �D�n�M���ɡC




/****************************************
4102056034 ���i�� �ĤG���@�~ 10/16
*****************************************/

/***********************
�����{���]�p�ĤG���@�~:
project: Accounting system
name: ���i��
studentID: 4102056034
deadline: 2015/10/16
require: using tracking handle
************************/
#include "stdafx.h"
#include "string.h"

using namespace System;
using namespace std;
using namespace System::IO;

#define STRMAX 30


//Declare function


	
void inputInfoCOM(int^ comp_num,array<String^>^ name, long^ init_ast, long^ init_liab, StreamWriter^ fout)
{
	//�s�W�@��company
	Console::WriteLine("Add a company");
	Console::WriteLine("<Basic Information>");
	Console::Write("company name:        ");
	name[*comp_num] = Console::ReadLine();
	Console::Write("initial asset:       ");
	*init_ast = long::Parse(Console::ReadLine());
	Console::Write("initial liabilities: ");
	*init_liab = long::Parse(Console::ReadLine());

	//write into the file
	fout->WriteLine("<Basic Information>");
	fout->Write("company_name:");
	fout->Write(name[*comp_num]);
	fout->Write("\tinitial_asset:");
	fout->Write("{0}",*init_ast);
	fout->Write("\tinitial_liabilities:");
	fout->WriteLine("{0}", *init_liab);
}
void inputInfoPdc(int^ countPdt, array<DateTime^>^ pdt_date, array<String^>^ pdt_name, array<int^>^ pdt_num, array<long^>^ pdt_price, long^ tot_pdt, StreamWriter^ fout)
{
	*tot_pdt = 0;
	int^ j = gcnew int(0);
	String^ input;
	Console::Write("How many items?		");
	*countPdt = int::Parse(Console::ReadLine());  //�����@���X�����~
	fout->WriteLine("Item_number: {0}", *countPdt);
	for (*j = 0; *j < *countPdt; (*j)++)
	{
		Console::Write("product name:		");
		pdt_name[*j] = Console::ReadLine(); //���~�W
		Console::Write("product number:		");
		pdt_num[*j] = int::Parse(Console::ReadLine()); //���~��
		Console::Write("product price:		");
		pdt_price[*j] = long::Parse(Console::ReadLine()); //���~����
		Console::Write("Enter Date in this Format(YYYY-MM-DD): ");
		input = Console::ReadLine(); //���Φr��s���(���W�w�榡)
		pdt_date[*j] = Convert::ToDateTime(input); //�r����datetime
		Console::WriteLine("-----------------------------------");
		*tot_pdt += ((long)*(pdt_num[*j])) * *(pdt_price[*j]);
		fout->WriteLine("product_name:{0}\tproduct_number:{1}\tproduct_price:{2}\tDate:{3}/{4}/{5}", pdt_name[*j], (pdt_num[*j]), (pdt_price[*j]), pdt_date[*j]->Year, pdt_date[*j]->Month, pdt_date[*j]->Day);
	}
	
	fout->WriteLine("total:{0}", *tot_pdt);
}
void InputInfoEmp(int^ countEmp, array<DateTime^>^ emp_date, array<String^>^ emp_name, array<long^>^ sal, long^ tot_emp, StreamWriter^ fout)
{
	*tot_emp = 0;
	int^ j = gcnew int(0);
	String^ input;
	Console::Write("How many employees?:    ");
	*countEmp = int::Parse(Console::ReadLine());
	fout->WriteLine("Employee_number: {0}", *countEmp);
	for (*j = 0; *j < *countEmp; (*j)++){
		Console::Write("Employee's name:	");
		emp_name[*j] = Console::ReadLine();
		Console::Write("Emplyee's salary:	");
		sal[*j] = long::Parse(Console::ReadLine());	
		Console::Write("Enter Date in this Format(YYYY-MM-DD): ");
		input = Console::ReadLine();
		emp_date[*j] = Convert::ToDateTime(input);
		Console::WriteLine("-----------------------------------");
		*tot_emp += *(sal[*j]);
		fout->WriteLine("Employee's_name:{0}\tEmployee's_salary:{1}\tDate:{2}/{3}/{4}", emp_name[*j], *(sal[*j]), emp_date[*j]->Year, emp_date[*j]->Month, emp_date[*j]->Day);
	}
	fout->WriteLine("total:{0}", *tot_emp);
}
void InputInfoMtl(int^ countMtl, array<DateTime^>^ mtl_date,array<String^>^ mtl_name, array<int^>^ mtl_num, array<long^>^ mtl_price, long^ tot_mtl, StreamWriter^ fout)
{
	*tot_mtl = 0;
	int^ j = gcnew int(0);
	String^ input;
	    Console::Write("How many materials?:");
	*countMtl = int::Parse(Console::ReadLine());
	fout->WriteLine("Item_number: {0}", *countMtl);
	for (*j = 0; *j < *countMtl; (*j)++)
	{
		Console::Write("Material's name:	    ");
		mtl_name[*j] = Console::ReadLine();
		Console::Write("Material's number:	");
		mtl_num[*j] = int::Parse(Console::ReadLine());
		Console::Write("Material's price:	");
		mtl_price[*j] = long::Parse(Console::ReadLine());
		Console::Write("Enter Date in this Format(YYYY-MM-DD): ");
		input = Console::ReadLine();
		Console::WriteLine("-----------------------------------");
		mtl_date[*j] = Convert::ToDateTime(input);
		*tot_mtl += *mtl_price[*j] * ((long)*(mtl_num[*j]));
		fout->WriteLine("Material's_name:{0}\tMaterial's_number:{1}\tMaterial's_pricee:{2}\tDate:{3}/{4}/{5}", mtl_name[*j], *(mtl_num[*j]), *(mtl_price[*j]), mtl_date[*j]->Year, mtl_date[*j]->Month, mtl_date[*j]->Day);
	}
	
	fout->WriteLine("total:{0}",*tot_mtl);
}
void ledger(array<String^>^ name, int^ comp_num, array<long^>^ asset, array<long^>^ liab, array<long^>^ pro, array<long^>^ rev)
{
	int^ j = gcnew int(0);
	Console::WriteLine("++++++++++++++++++++++++++++++++++++");
	Console::WriteLine("���q�W��\t�`���J\t�`��X\t�վl\t���q�`��\n");
	//�C���s�W���@�����q�Y�|�b�`�b�B�L�X��ثe����Ҧ������q����T
	for (*j = 0; *j <= *comp_num; (*j)++)
	{
		Console::Write("{0}     \t{1}    \t{2}  \t{3}  \t{4}\n", name[*j],asset[*j], liab[*j], pro[*j], rev[*j]);
	}
	Console::WriteLine("++++++++++++++++++++++++++++++++++++");
}
void billing(int^ countpdt, array<String^>^ pdt_name, array<int^>^ pdt_num, array<long^>^ pdt_price, long^ tot_pdt, array<DateTime^>^ pdt_date)
{
	int^ j = gcnew int(0);
	int^ choice = gcnew int(0);
	array<String^>^ pdt_name1 = gcnew array<String^>(*countpdt);
	array<int^>^ pdt_num1 = gcnew array<int^>(*countpdt);
	array<long^>^ pdt_price1 = gcnew array<long^>(*countpdt);
	array<DateTime^>^ pdt_date1 = gcnew array < DateTime^ >(*countpdt);
	//�ƻs�X�@�Ӥj�p�P�����j�p�ۦP���}�C ���Msort���|�ű�
	for (*j = 0; *j < *countpdt; (*j)++)
	{
		pdt_name1[*j] = pdt_name[*j];
		pdt_num1[*j] = pdt_num[*j];
		pdt_price1[*j] = pdt_price[*j];
		pdt_date1[*j] = pdt_date[*j];
	}
	//�����O�֦̾��Ȼs�ƪ����b��
	Console::WriteLine("1 �̷Ӥ��");
	Console::WriteLine("2 �̷ӻ���");
	Console::WriteLine("3 �̷Ӽƶq");
	Console::Write("�аݱz�Q���ƧǥX�z���b��?: ");
	choice = int::Parse(Console::ReadLine());
	switch (*choice)
	{
	case 1:
		pdt_date1->Sort(pdt_name1);
		pdt_date1->Sort(pdt_num1);
		pdt_date1->Sort(pdt_price1);
		pdt_date1->Sort(pdt_date1);
	case 2:
		pdt_price1->Sort(pdt_name1);
		pdt_price1->Sort(pdt_num1);
		pdt_price1->Sort(pdt_price1);
	case 3:
		pdt_num1->Sort(pdt_name1);
		pdt_num1->Sort(pdt_price1);
		pdt_num1->Sort(pdt_num1);
	}
	//layout
	array<String^>^ name = gcnew array < String^ >(*countpdt);
	Console::WriteLine("======================================");
	Console::WriteLine("=      �˷R���ȤH   �z���b��         =");
	Console::WriteLine("=list:                               =");

	for (*j = 0; *j < *countpdt; (*j)++)
	{
		Console::WriteLine("={0}                           {1} X {2}=", pdt_name1[*j], pdt_price1[*j],pdt_num1[*j]);
	}
	Console::WriteLine("=total:                             {0} =", *tot_pdt);
}
int main(array<System::String ^> ^args)
{
	//�ŧiCompany�����ܼ�
	array<String^>^ name = gcnew array < String^ >(STRMAX);
	long^ init_ast = gcnew long(0);
	long^ init_lia = gcnew long(0);
	array<long^>^ asset = gcnew array <long^>(STRMAX);
	array<long^>^ liab = gcnew array <long^>(STRMAX);
	array<long^>^ rev = gcnew array <long^>(STRMAX);
	array<long^>^ pro = gcnew array <long^>(STRMAX);

	//�U�������p��
	long^ tot_pdt = gcnew long(0);
	long^ tot_emp = gcnew long(0);
	long^ tot_mtl = gcnew long(0);

	//�����U����T�`��
	int^ countPdt = gcnew int(0);
	int^ countEmp = gcnew int(0);
	int^ countMtl = gcnew int(0);

	//�ŧiProduct�����ܼ�
	array<String^>^ pdt_name = gcnew array<String^>(STRMAX);
	array<int^>^ pdt_num = gcnew array<int^>(STRMAX);
	array<long^>^ pdt_price = gcnew array<long^>(STRMAX);
	array<DateTime^>^ pdt_date = gcnew array < DateTime^ >(STRMAX);

	//�ŧiEmployee�����ܼ�
	array<String^>^ emp_name = gcnew array<String^>(STRMAX);
	array<long^>^ sal = gcnew array<long^>(STRMAX);
	array<DateTime^>^ emp_date = gcnew array < DateTime^ >(STRMAX);

	//�ŧiMaterial�����ܼ�
	array<String^>^ mtl_name = gcnew array<String^>(STRMAX);
	array<int^>^ mtl_num = gcnew array<int^>(STRMAX);
	array<long^>^ mtl_price = gcnew array<long^>(STRMAX);
	array<DateTime^>^ mtl_date = gcnew array < DateTime^ >(STRMAX);

	bool^ cont = gcnew bool(true); //�o�����O�o��Handles�F!!!!!!
	int^ j = gcnew int(0); //index
	int^ i = gcnew int(0); // index
	int^ comp_num = gcnew int(0);

	//start account system
		Console::WriteLine("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
		Console::WriteLine("Welcome to Accounting System!");
		Console::WriteLine("-----------------------------------");

		while (cont){
			//construct the files' names
			//�o�ӨB�J���C�����q�����}�s�줣�P���ɮ׸�
			String^ comp = (*comp_num).ToString();
			String^ str(L"../information");
			str = String::Concat(str, comp);
			str = String::Concat(str, L".txt");

			//input information 
			StreamWriter^ fout = gcnew StreamWriter(str);
			inputInfoCOM(comp_num, name, init_ast, init_lia, fout);//�}�l��g���q
			Console::WriteLine(L"-----------------------------------");//�ڬO���j�u^.<
			inputInfoPdc(countPdt, pdt_date, pdt_name, pdt_num, pdt_price, tot_pdt, fout); //�}�l��g�P�ⲣ�~
			Console::WriteLine(L"-----------------------------------");
			InputInfoEmp(countEmp, emp_date, emp_name, sal, tot_emp, fout); //�}�l��g���u
			Console::WriteLine(L"-----------------------------------");
			InputInfoMtl(countMtl, mtl_date, mtl_name, mtl_num, mtl_price, tot_mtl, fout);//�}�l��g�ӧ�
			Console::WriteLine(L"-----------------------------------");
			fout->Close();

			//�q�ɮ�Ū�X���(�o�����O�oŪ�ɤF!!!!!!!!!!!!!!!!!!)
			String^ line = gcnew String("");
			String^ delimStr = gcnew String(" \t:");
			array<Char>^ delimiter = delimStr->ToCharArray();
			array<String^>^ words = gcnew array< String^ >(STRMAX);
			StreamReader^ fin = gcnew StreamReader(str);
			int^ i = gcnew int(0);
			fin->ReadLine();
			//Ū���q
			line = fin->ReadLine();
			words = line->Split(delimiter);
			name[*comp_num] = words[1];
			*init_ast = long::Parse(words[3]);
			*init_lia = long::Parse(words[5]);
			//Ūproduct
			line = fin->ReadLine();
			words = line->Split(delimiter);
			for (*i = 0; *i < *countPdt; (*i)++){
				line = fin->ReadLine();
				words = line->Split(delimiter);
				pdt_name[*i] = words[1];
				pdt_num[*i] = Convert::ToInt32(words[3]);
				pdt_price[*i] = Convert::ToInt32(words[5]);
				pdt_date[*i] = DateTime::Parse(words[7]);
			}
			line = fin->ReadLine();
			words = line->Split(delimiter);
			*tot_pdt = Convert::ToInt32(words[1]);
			//Ū���u
			line = fin->ReadLine();
			words = line->Split(delimiter);
			Console::Write("fuckyou:{0}", *countEmp);
			for (*i = 0; *i < *countEmp; (*i)++){
				line = fin->ReadLine();
				words = line->Split(delimiter);
				Console::Write("fuckyou:{0}", words[1]);
				emp_name[*i] = words[1];
				sal[*i] = Convert::ToInt32(words[3]);
				emp_date[*i] = DateTime::Parse(words[5]);
			}
			line = fin->ReadLine();
			words = line->Split(delimiter);
			*tot_emp = Convert::ToInt32(words[1]);
			//Ū�ӧ�
			line = fin->ReadLine();
			words = line->Split(delimiter);
			for (*i = 0; *i < *countMtl; (*i)++)
			{
				line = fin->ReadLine();
				words = line->Split(delimiter);
				mtl_name[*i] = words[1];
				mtl_num[*i] = Convert::ToInt32(words[3]);
				mtl_price[*i] = Convert::ToInt32(words[5]);
				mtl_date[*i] = DateTime::Parse(words[7]);
			}
			line = fin->ReadLine();
			words = line->Split(delimiter);
			*tot_mtl = Convert::ToInt32(words[1]);
			fin->Close();

			//�p��
			asset[*comp_num] = *tot_pdt;
			liab[*comp_num] = *tot_emp + *tot_mtl;
			pro[*comp_num] = *asset[*comp_num] - *liab[*comp_num];
			rev[*comp_num] = *pro[*comp_num] + *init_ast - *init_lia;

			//�L�X�o��
			billing(countPdt, pdt_name, pdt_num, pdt_price, tot_pdt, pdt_date);

			//�`�b
			ledger(name, comp_num, asset, liab, pro, rev);

			//�P�_�O�_��J�U�@�����q
			Console::Write("�O�_�n�~��?[true/false]: ");
			bool^ ConOrNot = gcnew bool;
			*ConOrNot = bool::Parse(Console::ReadLine());
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
