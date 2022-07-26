/**
 * @file BubbleSortNext.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The best bubble sorting technique best.
 * @version 0.1
 * @date 2022-07-13
 * @since Thursday, 9.30PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
/*Descending order bubble sort algorithm implementaion*/
void bubbleSort(int A[], unsigned int n){
    bool swapSatus = true;
    for(unsigned int i = 0; i<n - 1 && swapSatus == true; i++){
        swapSatus = false;
        for(unsigned int j = i+1; j<n; j++){
            if(A[i] > A[j]){
                swap(A[i], A[j]);
                swapSatus = true;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    unsigned int n = sizeof(A) / sizeof(int);
    bubbleSort(A, n);
    /*Print the result*/
    for(auto x : A){
        cout<<x<<" ";
    }
    return 0;
}
