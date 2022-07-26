/**
 * @file BubbleSortEfficient.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Bubble Sort Algorithm Time Complexity for Allmost Sorted list
 * @version 0.1
 * @date 2022-07-08
 * @since Friday; 10:53AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
void bubbleSortEfficient(int A[], unsigned int n){
    int count = 0;
    bool flag = true;
    for(unsigned int i = 0; i < n-1; i++){
        flag = false;
        for(unsigned int j = 0; j < n-(i+1); j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {1, 2, 3, 4, 5};
    unsigned int n = sizeof(A) / sizeof(int);
    bubbleSortEfficient(A, n);
    for(auto x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
    
}
