/**
 * @file InsertionSortWithSwap.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sorting algorithm using swaping technique
 * @version 0.1
 * @date 2022-12-30
 * @since FirDay; 12:38 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void insertionSortAlgorithm(vector <int> &listVector);

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listVector{43, 31, 26, 29, 12};
    srand(time(nullptr));
    const size_t size {20};
    cout<<"Unsorted elements are: ";
    for(size_t i {}; i < size; i++){
        listVector.push_back(rand() % size);
        cout<<listVector.at(i)<<" ";
        // cout<<listVector[i]<<" "; /*Supported but not good*/
        // cout<<*(listVector + i)<<" "; /*Not supprted..!*/
    }
    cout<<endl;
    insertionSortAlgorithm(listVector);
    cout<<"Sorted elements are: ";
    for(const int &x: listVector){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
void insertionSortAlgorithm(vector <int> &listVector){
    for(size_t i{1}; i<listVector.size(); i++){
        size_t j{i};
        /*Comparing: leftSorted > rightUnSorted array*/
        while(j > 0 && listVector.at(j-1) > listVector.at(j)){
            swap(listVector.at(j-1), listVector.at(j));
            j--;
        }
    }
}
