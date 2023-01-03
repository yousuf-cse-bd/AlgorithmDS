/**
 * @file SelectionSortWithVector.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The selection sort using vector collection
 * @version 0.1
 * @date 2023-01-03
 * @since TuesDay; 10:50 PM
 * @copyright Copyright (c) 2023
 * @time_compexity: n^2 all types of cases 
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

void selectionSortAlgorithm(vector <int> &listInt){
    for(size_t i{0}; i < listInt.size() - 1; i++){
        size_t minIndex {i};
        for(size_t j{i+1}; j < listInt.size(); j++){
            if(listInt.at(minIndex) > listInt.at(j)){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(listInt.at(minIndex), listInt.at(i));
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {9, 13, 15, 11, 2};
    cout<<"Give list elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    selectionSortAlgorithm(listInt);
    cout<<"The sorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

