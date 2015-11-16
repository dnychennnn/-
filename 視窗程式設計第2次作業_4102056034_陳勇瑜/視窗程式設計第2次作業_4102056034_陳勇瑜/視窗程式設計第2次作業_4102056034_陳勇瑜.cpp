// 視窗程式設計第2次作業_4102056034_陳勇瑜.cpp: 主要專案檔。




/****************************************
4102056034 陳勇瑜 第二次作業 10/16
*****************************************/

/***********************
視窗程式設計第二次作業:
project: Accounting system
name: 陳勇瑜
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
	//新增一個company
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
	*countPdt = int::Parse(Console::ReadLine());  //紀錄共有幾項產品
	fout->WriteLine("Item_number: {0}", *countPdt);
	for (*j = 0; *j < *countPdt; (*j)++)
	{
		Console::Write("product name:		");
		pdt_name[*j] = Console::ReadLine(); //產品名
		Console::Write("product number:		");
		pdt_num[*j] = int::Parse(Console::ReadLine()); //產品數
		Console::Write("product price:		");
		pdt_price[*j] = long::Parse(Console::ReadLine()); //產品價格
		Console::Write("Enter Date in this Format(YYYY-MM-DD): ");
		input = Console::ReadLine(); //先用字串存日期(有規定格式)
		pdt_date[*j] = Convert::ToDateTime(input); //字串轉datetime
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
	Console::WriteLine("公司名稱\t總收入\t總支出\t盈餘\t公司總價\n");
	//每次新增完一間公司即會在總帳處印出到目前為止所有的公司之資訊
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
	//複製出一個大小與元素大小相同的陣列 不然sort完會空掉
	for (*j = 0; *j < *countpdt; (*j)++)
	{
		pdt_name1[*j] = pdt_name[*j];
		pdt_num1[*j] = pdt_num[*j];
		pdt_price1[*j] = pdt_price[*j];
		pdt_date1[*j] = pdt_date[*j];
	}
	//讓消費者擁有客製化的的帳單
	Console::WriteLine("1 依照日期");
	Console::WriteLine("2 依照價錢");
	Console::WriteLine("3 依照數量");
	Console::Write("請問您想怎麼排序出您的帳單?: ");
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
	Console::WriteLine("=      親愛的客人   您的帳單         =");
	Console::WriteLine("=list:                               =");

	for (*j = 0; *j < *countpdt; (*j)++)
	{
		Console::WriteLine("={0}                           {1} X {2}=", pdt_name1[*j], pdt_price1[*j],pdt_num1[*j]);
	}
	Console::WriteLine("=total:                             {0} =", *tot_pdt);
}
int main(array<System::String ^> ^args)
{
	//宣告Company相關變數
	array<String^>^ name = gcnew array < String^ >(STRMAX);
	long^ init_ast = gcnew long(0);
	long^ init_lia = gcnew long(0);
	array<long^>^ asset = gcnew array <long^>(STRMAX);
	array<long^>^ liab = gcnew array <long^>(STRMAX);
	array<long^>^ rev = gcnew array <long^>(STRMAX);
	array<long^>^ pro = gcnew array <long^>(STRMAX);

	//各項金錢小結
	long^ tot_pdt = gcnew long(0);
	long^ tot_emp = gcnew long(0);
	long^ tot_mtl = gcnew long(0);

	//紀錄各項資訊總數
	int^ countPdt = gcnew int(0);
	int^ countEmp = gcnew int(0);
	int^ countMtl = gcnew int(0);

	//宣告Product相關變數
	array<String^>^ pdt_name = gcnew array<String^>(STRMAX);
	array<int^>^ pdt_num = gcnew array<int^>(STRMAX);
	array<long^>^ pdt_price = gcnew array<long^>(STRMAX);
	array<DateTime^>^ pdt_date = gcnew array < DateTime^ >(STRMAX);

	//宣告Employee相關變數
	array<String^>^ emp_name = gcnew array<String^>(STRMAX);
	array<long^>^ sal = gcnew array<long^>(STRMAX);
	array<DateTime^>^ emp_date = gcnew array < DateTime^ >(STRMAX);

	//宣告Material相關變數
	array<String^>^ mtl_name = gcnew array<String^>(STRMAX);
	array<int^>^ mtl_num = gcnew array<int^>(STRMAX);
	array<long^>^ mtl_price = gcnew array<long^>(STRMAX);
	array<DateTime^>^ mtl_date = gcnew array < DateTime^ >(STRMAX);

	bool^ cont = gcnew bool(true); //這次有記得用Handles了!!!!!!
	int^ j = gcnew int(0); //index
	int^ i = gcnew int(0); // index
	int^ comp_num = gcnew int(0);

	//start account system
		Console::WriteLine("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
		Console::WriteLine("Welcome to Accounting System!");
		Console::WriteLine("-----------------------------------");

		while (cont){
			//construct the files' names
			//這個步驟讓每間公司都分開存到不同的檔案裡
			String^ comp = (*comp_num).ToString();
			String^ str(L"../information");
			str = String::Concat(str, comp);
			str = String::Concat(str, L".txt");

			//input information 
			StreamWriter^ fout = gcnew StreamWriter(str);
			inputInfoCOM(comp_num, name, init_ast, init_lia, fout);//開始填寫公司
			Console::WriteLine(L"-----------------------------------");//我是分隔線^.<
			inputInfoPdc(countPdt, pdt_date, pdt_name, pdt_num, pdt_price, tot_pdt, fout); //開始填寫銷售產品
			Console::WriteLine(L"-----------------------------------");
			InputInfoEmp(countEmp, emp_date, emp_name, sal, tot_emp, fout); //開始填寫員工
			Console::WriteLine(L"-----------------------------------");
			InputInfoMtl(countMtl, mtl_date, mtl_name, mtl_num, mtl_price, tot_mtl, fout);//開始填寫耗材
			Console::WriteLine(L"-----------------------------------");
			fout->Close();

			//從檔案讀出資料(這次有記得讀檔了!!!!!!!!!!!!!!!!!!)
			String^ line = gcnew String("");
			String^ delimStr = gcnew String(" \t:");
			array<Char>^ delimiter = delimStr->ToCharArray();
			array<String^>^ words = gcnew array< String^ >(STRMAX);
			StreamReader^ fin = gcnew StreamReader(str);
			int^ i = gcnew int(0);
			fin->ReadLine();
			//讀公司
			line = fin->ReadLine();
			words = line->Split(delimiter);
			name[*comp_num] = words[1];
			*init_ast = long::Parse(words[3]);
			*init_lia = long::Parse(words[5]);
			//讀product
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
			//讀員工
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
			//讀耗材
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

			//計算
			asset[*comp_num] = *tot_pdt;
			liab[*comp_num] = *tot_emp + *tot_mtl;
			pro[*comp_num] = *asset[*comp_num] - *liab[*comp_num];
			rev[*comp_num] = *pro[*comp_num] + *init_ast - *init_lia;

			//印出發票
			billing(countPdt, pdt_name, pdt_num, pdt_price, tot_pdt, pdt_date);

			//總帳
			ledger(name, comp_num, asset, liab, pro, rev);

			//判斷是否輸入下一間公司
			Console::Write("是否要繼續?[true/false]: ");
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
