/**
 * @file InsertionSortWithoutSwap.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sorting algorithm without swaping technique
 * @version 0.1
 * @date 2023-01-01
 * @since SunDay; 11:09 PM
 * @copyright Copyright (c) 2023
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
    vector <int> listVector{};
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
    for(ssize_t i{1}; i<listVector.size(); i++){
        int temp{listVector.at(i)};
        ssize_t j{i - 1}; /*ssize_t == signed long long int*/
        while(j >= 0 && listVector.at(j) > temp){
            listVector.at(j+1) = listVector.at(j);
            j--;
        }
        listVector.at(j+1) = temp;
    }
}