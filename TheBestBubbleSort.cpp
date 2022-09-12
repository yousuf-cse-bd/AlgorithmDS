/**
 * @file TheBestBubbleSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Best practice bubble sort algorithm
 * @version 0.1
 * @date 2022-09-12
 * @since MonDay; 12:13 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Bubble sort alorithm*, ascending-order*/
void theBestBubbleSort(int *A, const unsigned int size){
    bool swapStatus = true;
    /*Number constant 4 bytes and here using variable 2 bytes*/
    for(unsigned int i = 0; i < (size - 1) && swapStatus == true; i++){
        swapStatus = false;
        for(unsigned int j = 0; j < size - (i + 1); j++){
            if(*(A+j) > *(A+j+1)){
                swap(*(A+j), *(A+j+1));
                swapStatus = true;
            }
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    #ifndef ONLINE_JUDGE
        freopen("InputData.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    // int A[] = {2, 1, 5, 4, 3};
    const unsigned int size = 5;
    int A[size];
    int testCase = 120;
    while(--testCase){
            for(unsigned int i = 0; i < size; i++){
            cin>>A[i];
        }
        theBestBubbleSort(A, size);
        for(int x : A){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}
