/**
 * @file SumOfVectorRecursion1.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of all vector element using recursion method | C++ Programming Example
 * @version 0.1
 * @date 2023-06-18
 * @since SunDay; 10:39 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
 
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

double sumOfList(const vector <int> &list, const size_t &i){
	if(list.empty()){
		return 0;
	}
	auto sum {list.at(i)};
	if(i == 0){ /*Base Case*/
		return sum;
	}
	else{ /*Recursive case*/
		return sum + sumOfList(list, i-1);
	}
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");

	vector <int > list {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	cout<<"Sum of them: "<<sumOfList(list, list.size()-1)<<endl;

    return 0;
}
