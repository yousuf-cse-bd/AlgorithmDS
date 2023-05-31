/**
 * @file SecondHighestNumber1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find The Second Highest Number In A Vector | C++ Programming Example
 * @version 0.1
 * @date 2022-05-30
 * @since TuesDay; 08:23 PM
 * @copyright Copyright (c) 2022
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

const int secondHighestNumber(const vector <int> &v, const size_t &vSize){
	int max1{v.at(0)}; 
	int max2{v.at(1)};
	
	/*Optional start*/
	if(max1 > max2){
		max1 = v.at(0);
		max2 = v.at(1);
	}
	else{
		max1 = v.at(1);
		max2 = v.at(0);
	}
	/*Optional end*/
	
	for(size_t i{2}; i < vSize; i++){
		if(max1 < v.at(i)){ /*Firstly find->Max number*/
			max2 = max1;
			max1 = v.at(i);
		}
		else if(max2 < v.at(i) && v.at(i) < max1){
			max2 = v.at(i);
		}
	}
	
	return max2;
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
	
	cout<<"Second Heigst Number: "<<secondHighestNumber(numbers, limit)<<endl;
	
	system("pause>0");
    return 0;
}