/**
 * @file FilterDuplicatesUniques2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array (vector) filtering duplicates and uniques elements
 * @version 0.1
 * @date 2023-04-08
 * @since SaturDay; 05:16 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <list>
#include <deque>
#pragma pack(1)
using namespace std;

ssize_t binarySearch(const vector <int> &v, const int &x, size_t lowerIndex, size_t upperIndex){
	size_t midIndex{lowerIndex + (upperIndex - lowerIndex)/2};
	
	if(lowerIndex > upperIndex){
		return -1;
	}
	
	if(v.at(midIndex) == x){
		return midIndex;
	}
	else if(v.at(midIndex) < x){
		return binarySearch(v, x, midIndex + 1, upperIndex);
	}
	else{
		return binarySearch(v, x, lowerIndex, midIndex - 1);
	}
}

ssize_t indexOf(vector <int> &v, const int &x){
	sort(v.begin(), v.end());
	ssize_t midIndex {binarySearch(v, x, 0, (v.size()-1))};
	return midIndex;
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
	
	for(ssize_t i{0}; i != static_cast<ssize_t>(v1.size()); i++){
		if(indexOf(v1, v1.at(i)) == i){
			uniques.emplace(v1.at(i));
		}
		else{
			duplicate.emplace_back(v1.at(i));
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