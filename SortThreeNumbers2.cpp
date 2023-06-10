/**
 * @file SortThreeNumbers2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sort three numbers uisng min(), max() with multiple return values | C++ Programming Example
 * @version 0.1
 * @date 2022-06-10
 * @since SaturDay; 05:31 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

void sortThreeNumbers(int &number1, int &number2, int &number3){
	int minNumber {min(number1, min(number2, number3))};
	int maxNumber {max(number1, max(number2, number3))};
	int midNumber {0};
	
	if(number1 > minNumber && number1 < maxNumber){
		midNumber = number1;
	}
	else if(number2 > minNumber && number2 < maxNumber){
		midNumber = number2;
	}
	else{
		midNumber = number3;
	}
	
	number1 = minNumber;
	number2 = midNumber;
	number3 = maxNumber;
}

int main(int argc, const char *const argv[]){
	system("cls");
	
	int number1{0};
	int number2{0};
	int number3{0};
	
	cout<<"Enter frist number here: ";
	cin>>number1;
	
	cout<<"Enter second number here: ";
	cin>>number2;
	
	cout<<"Enter third number here: ";
	cin>>number3;
	
	sortThreeNumbers(number1, number2, number3);
//	swap(number1, number3); /*Descending ordered*/
	cout<<number1<<" "<<number2<<" "<<number3<<endl;
	
	system("pause>0");
    return 0;
}
