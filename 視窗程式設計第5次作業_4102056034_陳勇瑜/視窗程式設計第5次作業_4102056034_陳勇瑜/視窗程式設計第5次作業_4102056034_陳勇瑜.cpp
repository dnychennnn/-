// 視窗程式設計第5次作業_4102056034_陳勇瑜.cpp: 主要專案檔。

/***************************
4102056034 陳勇瑜 第五次作業 12/9
***************************/

#include "stdafx.h"
#include "History.h"
#include "Myform.h"



using namespace System;
using namespace 視窗程式設計第5次作業_4102056034_陳勇瑜;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//建立主視窗並執行
	Application::Run(gcnew MyForm());
    return 0;
}
