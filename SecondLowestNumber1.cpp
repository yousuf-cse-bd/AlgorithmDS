/**
 * @file SecondLowestNumber1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find The Second Lowest Number In A Vector | C++ Programming Example
 * @version 0.1
 * @date 2022-05-31
 * @since WednesDay; 09:35 AM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <vector>
#include <ctime>
#pragma pack(1)
using namespace std;

const int secondLowestNumber(const vector <int> &v, const size_t &vSize){
	int min1{v.at(0)}; 
	int min2{v.at(1)};
	
	/*Optional start*/
	if(min1 < min2){
		min1 = v.at(0);
		min2 = v.at(1);
	}
	else{
		min1 = v.at(1);
		min2 = v.at(0);
	}
	/*Optional end*/
	
	for(size_t i{2}; i < vSize; i++){
		if(min1 > v.at(i)){
			min2 = min1;
			min1 = v.at(i);
		}
		else if(min2 > v.at(i) && v.at(i) > min1){
			min2 = v.at(i);
		}
	}
	
	return min2;
}

const void display(const vector <int> &v){
	for(const int &x: v){
		cout<<x<<" ";
	}
	cout<<endl;
}

int main(int argc, const char *const argv[]){
    /* code */
    system("cls");
	
	const size_t limit{10};
	vector <int> numbers(limit);
	srand(time(nullptr));

	for(size_t i{0}; i < limit; i++){
		numbers.at(i) = rand() % limit;
	}
	
	display(numbers);
	
	cout<<"Second Lowest Number: "<<secondLowestNumber(numbers, limit)<<endl;
	
	system("pause>0");
    return 0;
}