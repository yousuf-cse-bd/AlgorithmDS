/**
 * @file InsertionSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sort algorithm using swaping technique
 * @version 0.1
 * @date 2022-07-13
 * @since Thursday, 10.30PM
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

void insertionSort(int A[], unsigned int n){
    for(unsigned int i = 1; i<n; i++){
        unsigned int j = i;
        while(j>0 && A[j - 1] < A[j]){ //Decsending order
            swap(A[j-1], A[j]);
            j--;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    unsigned int n = sizeof(A) / sizeof(int);
    insertionSort(A, n);
    /*Print the result*/
    for(auto x : A){
        cout<<x<<" ";
    }
    return 0;
}
