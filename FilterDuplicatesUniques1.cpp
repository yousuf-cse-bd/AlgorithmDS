/**
 * @file FilterDuplicatesUniques1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array (vector) filtering duplicates and uniques elements
 * @version 0.1
 * @date 2023-04-08
 * @since SaturDay; 04:50 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <deque>
#pragma pack(1)
using namespace std;

ssize_t indexOf(const vector <int> &v1, const int &x){
	
	for(size_t index{0}; index != v1.size(); index++){
		if(v1.at(index) == x){
			return index;
		}
	}
	return -1;
}


int main(int argc, const char *const argv[]){
    system("cls");
	cout<<setprecision(2)<<fixed;
	vector <int> v1{1, 4, 5, 5, 6, 7, 6, 9, 10, 4};
	
	cout<<"Original: ";
	for(const auto &v: v1){
		cout<<v<<" ";
	}
	cout<<endl;
	
	set <int> uniques{};
	deque <int> duplicate{};
	
	for(ssize_t index{0}; index != static_cast<ssize_t>(v1.size()); index++){
		if(indexOf(v1, v1.at(index)) == index){
			uniques.emplace(v1.at(index));
		}
		else{
			duplicate.emplace_back(v1.at(index));
		}
	}

    duplicate.shrink_to_fit();

	cout<<"Duplicates: ";
	for(const auto &d: duplicate){
		cout<<d<<" ";
	}
	cout<<endl;
	
	cout<<"Uniques: ";
	for(const auto &u: uniques){
		cout<<u<<" ";
	}
	cout<<endl;
	
	constexpr const char smilee{2};
	cout<<setw(50)<<setfill(smilee)<<right<<"HappyEnding...!"<<endl;
	
	system("pause>0");
};