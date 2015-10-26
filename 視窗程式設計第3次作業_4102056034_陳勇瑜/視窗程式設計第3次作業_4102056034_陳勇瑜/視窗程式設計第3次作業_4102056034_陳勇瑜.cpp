// 視窗程式設計第3次作業_4102056034_陳勇瑜.cpp : 定義主控台應用程式的進入點。
//

/***************************
4102056034 陳勇瑜 第三次作業10/28
***************************/

/***********************
Windows Programming 3rd assignment
project: Implementing a SIMPLE calculator
name: 陳勇瑜
deadline: 2015/10/28
require: using Win32 console application
************************/

/********************************************
前導講解 background info:
	expression: term addop term addop...
	term: number multop term multop...
	number: digits (including extract the substring inside the brackets)			

    so: value =  term + term  
				  /       \
		 number*number  number*number
			|      |       |     |
	    {},[],(),digits	 {},[],(),digits

	Futhermore:
		You can use some math functions by the following typing rules:
			*sin(x)
			*cos(x)
			*tan(x)
			*sec(x)
			*csc(x)
			*x^y
			*e^y
			*power(x,y)
			*sqrt(x)
			*log10(x)
			*ln(x)
			*x!
*********************************************/

#include "stdafx.h"
#include <iostream>                   // For stream input/output
#include <cstdlib>                    // For the exit() function
#include <cctype>                     // For the isdigit() function
#include <cstring>                    // For the strcpy() function
#include "stdio.h"
#include "math.h"

using std::cin;
using std::cout;
using std::endl;
using namespace std;

void eatspaces(char* str);            // 去除空格
double* expr(char* str);               // 處理expression之函數
double* term(char* str, int* index);   // 處理term之函數
double* number(char* str, int *index); // 處理numer之函數
char* extract(char* str, int *index); // 處理大，中，小括號之函數
const int MAX(80);                    // expression讀取的char陣列之最大長度
// including '\0'
int _tmain(int argc, _TCHAR* argv[])
{
	char* buffer = new char(MAX);    // Input area for expression to be evaluated
	FILE* fp = NULL;

	cout << endl
		<< "Welcome to your friendly calculator."
		<< endl
		<< "Enter an expression, a file name that containts formula, or an empty line to quit."
		<< endl;

	
	for (;;)
	{
		cin.getline(buffer, sizeof(char)*MAX);   // Read an input line
		fp = fopen(buffer, "r");
		//自動判斷輸入的字串為檔名或是公式
		if (fp != NULL)
		{ 
			while(!feof(fp)){
				fgets(buffer, sizeof(char)*MAX, fp);
				cout << buffer;
				if (*(buffer + (int)strlen(buffer)-1) == '\n')
				{
					*(buffer + (int)strlen(buffer)-1) = '\0';
					
				}
				eatspaces(buffer);                    // Remove blanks from input
				if (!*(buffer))                        // Empty line ends calculator
					return 0;
				cout << "\t= " << *(expr(buffer))        // Output value of expression
					<< endl << endl;
			}
		}
		else{
			eatspaces(buffer);                    // Remove blanks from input
		if (!(*buffer))                        // Empty line ends calculator
			return 0;
		cout << "\t= " << *(expr(buffer))        // Output value of expression
			<< endl << endl;
		}	
	fclose(fp);
}

}
void eatspaces(char* str)
{
	int* i=new int(0);                              // 'Copy to' index to string
	int* j=new int(0);                              // 'Copy from' index to string

	while ((*(str + (*i)) = *(str + (*j)++)) != '\0')  // Loop while character
		// copied is not \0
		if (*(str + *i) != ' ')                    // Increment i as long as
			(*i)++;                                  // character is not a space
	return;
}
double* expr(char* str)
{
	double* value = new double(0);                   // Store result here
	int* index = new int(0);                      // Keeps track of current character position
	*value = *(term(str, index));            // Get first term

	for (;;)                              // Indefinite loop, all exits inside
	{
		switch (*(str + (*index)++))           // Choose action based on current character
		{
		case '\0':                       // We're at the end of the string
			return value;                 // so return what we have got

		case '+':                        // + found so add in the
			*value += *term(str, index);    // next term
			break;

		case '-':                        // - found so subtract
			*value -= *term(str, index);    // the next term
			break;

		default:                         // If we reach here the string
			cout << endl                  // is junk
				<< "Arrrgh!*#!! There's an error"
				<< endl;
			exit(1);
		}
	}
}
double* term(char* str, int* index)
{
	double* x = new double(0);
	double* y = new double(0);
	double* value=new double(0.0);                   // Somewhere to accumulate the result

	switch (*(str + (*index)))
	{
		case 's':
			if (*(str + (*index) + 1) == 'i')	//判斷是sin(x)
			{
				(*index) += 3;
				*value = sin(*number(str, index));
			}
			else if (*(str + (*index) + 1) == 'e')	//判斷是sec(x)
			{
				(*index) += 3;
				*value = 1/cos(*number(str, index));
			}
			else if (*(str + (*index) + 1) == 'q') //判斷是開平方根
			{
				(*index) += 4;
				*value = sqrt(*number(str, index));
			}
			break;
		case 'c':
			if (*(str + *(index) + 2) == 's')	//判斷是cos(x)
			{
				(*index) += 3;
				*value = cos(*number(str, index));
			}
			else if (*(str + (*index) + 2) == 't') //判斷是cot(x)
			{
				(*index) += 3;
				*value = 1 / tan(*number(str, index));
			}
			else if (*(str + (*index) + 2) == 'c') //判斷是csc(x)
			{
				*index += 3;
				*value = 1 / sin(*number(str, index));
			}
			break;
		case 't':
			*index += 3;
			*value = tan(*number(str, index));  //判斷是tan(x)
			break;
		case 'p':								//判斷是power(x,y)
			*index += 6;
			*x = *number(str, index);
			*index += 1;
			*y = *number(str, index);
			*value = pow(*x, *y);
			(*index)++;
			break;
		case 'l':								//判斷是log10(x)
			if (*(str + (*index) + 1) == 'o')
			{
			*index += 5;
			*value = log10(*number(str, index));
			break;
			}
			else if (*(str + (*index) + 1) == 'n')
			{
				*index += 2;
				*value = log(*number(str, index));
				break;
			}
		case 'e':								//判斷是自然數的x次方 e^x
			*index += 2;
			*value = exp(*number(str, index));
			break;
		default:								//若都非以上函數 代表是一般number 將第一個值給value
			*value = *number(str, index);
			break;
	}
	delete x;
	delete y;
	         
	// Get the first number in the term
	// Loop as long as we have a good operator
	while (true)
	{

		if (*(str + (*index)) == '*')          //乘法 乘以下一個term
			*value *= *number(str, &(++(*index)));   

		else if (*(str + (*index)) == '/')     //除法 除以下一個term
			*value /= *number(str, &(++(*index)));   

		else if (*(str + *(index)) == '%')
			(*value) = static_cast<int>(*value) % static_cast<int>(*number(str, ++index)); // 取餘數

		else if (*(str + *(index)) == '^')		//x的y次方 
		{	
			*value=pow(*value, *(number(str, &(++*(index)))));
		}
		else if (*(str + (*index)) == '!')		//階層 
		{
			int* i = new int(1);
			int *count = new int((int)(*value));
			for (*i=1; *i < *count; (*i)++)
			{
				*value *= (*i);
			}
			(*index)++;
		}
		else
			break;
	}
	return value;                        // We've finished, so return what we've got.
}
double* number(char* str, int* index)
{
	double* value=new double(0.0);                   // Store the resulting value

	if (*(str + (*index)) == '(' || *(str + (*index)) == '[' || *(str + (*index)) == '{')            // Start of parentheses
	{
		char* psubstr(nullptr);            // Pointer for substring
		psubstr = extract(str, &(++(*index)));   // Extract substring in brackets
		value = expr(psubstr);             // Get the value of the substring
		delete psubstr;                   // Clean up the free store
		return value;                      // Return substring value
	}

	// There must be at least one digit...
	if (!isdigit(*(str + (*index))))
	{ // There's no digits so input is junk...
		cout << endl
			<< "Arrrgh!*#!! There's an error"
			<< endl;
		exit(1);
	}

	while (isdigit(*(str + (*index))))       // Loop accumulating leading digits
		*value = 10 * (*value) + (*(str + (*index)++) - '0');

	// Not a digit when we get to here
	if (*(str + (*index)) != '.')            // so check for decimal point
		return value;                      // and if not, return value

	double* factor=new double(1.0);                  // Factor for decimal places
	while (isdigit(*(str + (++(*index)))))   // Loop as long as we have digits
	{
		*factor *= 0.1;                     // Decrease factor by factor of 10
		*value = *value + (*(str + (*index)) - '0')*(*factor);   // Add decimal place
	}

	return value;                        // On loop exit we are done
}
char* extract(char* str, int* index)
{
	char* buffer=new char(MAX);                   // Temporary space for substring
	char* pstr(nullptr);                         // Pointer to new string for return
	int* numL1=new int(0);							// Count of left parentheses found
	int* numL2 = new int(0);
	int* numL3 = new int(0);
	int* bufindex=new int(*index);                // Save starting value for index

	do
	{
		*(buffer + (*index) - (*bufindex)) = *(str + (*index));
		switch (*(buffer + (*index) - (*bufindex)))
		{
		case ')': 
			if (0 == (*numL1))
			{
				size_t size = (*index) - *bufindex;
				*(buffer + (*index) - *bufindex) = '\0';  // Replace ')' with '\0' 
				++(*index);
				pstr = new char[(*index) - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index) - *bufindex, buffer); // Copy substring to new memory
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL1)--;                      // Reduce count of '(' to be matched
			break;

		case '(':
			(*numL1)++;                        // Increase count of '(' to be 
			// matched
			break;

		case ']':
			if (0 == (*numL2))
			{
				size_t size = *index - *bufindex;
				*(buffer + (*index) - *bufindex) = '\0';  // Replace ']' with '\0' 
				++(*index);
				pstr = new char[*index - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index) - *bufindex, buffer); // Copy substring to new memory
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL2)--;                      // Reduce count of '[' to be matched
			break;
		case '[':
			(*numL2)++;                        // Increase count of '[' to be 
			// matched
			break;

		case '}':
			if (0 == (*numL3))
			{
				size_t size = (*index) - *bufindex;
				*(buffer + (*index) - *bufindex) = '\0';  // Replace '}' with '\0' 
				++(*index);
				pstr = new char[(*index) - *bufindex];
				if (!pstr)
				{
					cout << "Memory allocation failed,"
						<< " program terminated.";
					exit(1);
				}
				strcpy_s(pstr, (*index) - *bufindex, buffer); // Copy substring to new memory
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL3)--;                      // Reduce count of '{' to be matched
			break;
		case '{':
			(*numL3)++;                        // Increase count of '{' to be 
			// matched
			break;
		}
	} while (*(str + (*index)++) != '\0'); // Loop - don't overrun end of string

	cout << "Ran off the end of the expression, must be bad input."
		<< endl;
	exit(1);
}