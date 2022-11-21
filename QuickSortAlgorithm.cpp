/**
 * @file QuickSortAlgorithm.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented the quick sort algorithm with pointer natation random numbers
 * @version 0.1
 * @date 2022-11-21
 * @since MonDay; 10:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

unsigned short int partition(int *elements, const int leftIndex, const int rightIndex){
    int pivot = *(elements+leftIndex); /*Let, first index is pivot*/
    int i = leftIndex, j = rightIndex;
    while(i < j){
        while(*(elements + i) <= pivot){
            i++;
        }
        while(*(elements + j) > pivot){
            j--;
        }
        if(i < j){
            swap(*(elements + i), *(elements + j));
        }
    }
    swap(*(elements + leftIndex), *(elements + j));
    return j;
}

void quickSort(int *elements, const int leftIndex, const int rightIndex){
    if(leftIndex < rightIndex){
        int j = partition(elements, leftIndex, rightIndex);
        quickSort(elements, leftIndex, j-1);
        quickSort(elements, j+1, rightIndex);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned short int size = 10;
    int elements[size];
    cout<<"Unsorted elements are: ";
    for(unsigned short int i = 0; i != size; i++){
        *(elements + i) = rand() % size;
        cout<<*(elements + i)<<" ";
    }
    cout<<endl;
    quickSort(elements, 0, size-1);
    cout<<"Sorted elements are: ";
    for(unsigned short int i = 0; i != size; i++){
        cout<<*(elements + i)<<" ";
    }
    cout<<endl;
    return 0;
}
