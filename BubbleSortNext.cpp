/**
 * @file BubbleSortNext.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief This bubble sorting technique using two different arrays
 * @version 0.1
 * @date 2022-07-13
 * @since Thursday, 9.30PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
/*Descending order bubble sort algorithm implementaion*/
void bubbleSortNext(int *Array, const unsigned int size){
    for(unsigned int i = 0; i< size - 1; i++){
        for(unsigned int j = i+1; j < size; j++){
            if(*(Array+i) < *(Array+j)){
                swap(*(Array+i), *(Array+j));
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    #ifndef TestCaseMatching
        freopen("InputData.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    // int A[] = {2, 1, 5, 4, 3};
    const unsigned int size = 5;
    
    int A[size];
    int testCase = 1;
    while(testCase <= 120){
        cout<<testCase<<": Case = ";
        for(unsigned int i = 0; i < size; i++){
            cin>>*(A+i);
        }
        bubbleSortNext(A, size);
        for(int x : A){
            cout<<x<<" ";
        }
        cout<<endl;
        testCase++;
    }
    return 0;
}
