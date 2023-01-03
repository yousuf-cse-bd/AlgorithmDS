/**
 * @file SelectionSortAscendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The selection sort using array list pointer notation
 * @version 0.1
 * @date 2023-01-03
 * @since TuesDay; 10:37 PM
 * @copyright Copyright (c) 2023
 * @time_compexity: n^2 all types of cases 
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void selectionSortAlgorithm(int *listInt, const size_t size){
    for(size_t i{0}; i < size - 1; i++){
        size_t minValueIndex {i};
        for(size_t j{i+1}; j < size; j++){
            /*Finding min-value-index from list*/
            if(*(listInt + minValueIndex) > *(listInt + j)){
                minValueIndex = j;
            }
        }
        if(minValueIndex != i){
            swap(*(listInt + minValueIndex), *(listInt + i));
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int listInt[] {9, 13, 15, 11, 2};
    const size_t size {sizeof(listInt) / sizeof(int)};
    cout<<"Give list elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    selectionSortAlgorithm(listInt, size);
    cout<<"The sorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
