/**
 * @file FindMidNumber1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Finding mid number using condtions and functions | C++ Programming Example
 * @version 0.1
 * @date 2022-06-10
 * @since SaturDay; 06:43 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

int findMidNumber(const int &number1, const int &number2, const int &number3){
	int minNumber {min(number1, min(number2, number3))};
	int maxNumber {max(number1, max(number2, number3))};
	
	if(number1 > minNumber && number1 < maxNumber){
		return number1;
	}
	else if(number2 > minNumber && number2 < maxNumber){
		return number2;
	}
	else{
		return number3;
	}
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
	
	cout<<"\tMid Number: "<<findMidNumber(number1, number2, number3)<<endl;
	
	system("pause>0");
	
    return 0;
}
