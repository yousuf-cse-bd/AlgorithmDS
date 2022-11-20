/**
 * @file MergeSortAscendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented merge sort algorithm using a temp[] array
 * @version 0.1
 * @date 2022-11-19
 * @since SaturDay; 08:07 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void mergeSortConquer(int elements[], const int leftIndex, const int midIndex, const int rightIndex){
    int i, j, k;
    int temp[rightIndex+1];
    i = leftIndex, j = midIndex + 1, k = leftIndex;
    /*Index, i for leftSubArray, Index, j for rightSubArray*/
    while(i <= midIndex && j <= rightIndex){
        /*Compararing leftSubArray's element is les than rightSubArray's elelment*/
        if(*(elements+i) <= *(elements+j)){
            *(temp+k) = *(elements+i);
            i++, k++;
        }else{
            *(temp + k) = *(elements+j);
            j++, k++;
        }
    }
    /*If Remaining any element for left-subArray*/
    while(i <= midIndex){
        *(temp + k) = *(elements+i);
        i++, k++;  
    }
    /*If Remaining any element for right-subArray*/
    while(j <= rightIndex){
        *(temp + k) = *(elements+j);
        j++, k++;
    }
    /*Just copy temp-Array to givenArray*/
    for(k = leftIndex; k <= rightIndex; k++){
        *(elements + k) = *(temp + k);
    }
}

void mergeSortDivided(int elements[], int leftIndex, int rightIndex){
    /*Base case, if array element 0 or 1 since the array is sorted*/
    if(leftIndex >= rightIndex){
        return;
    }
    /*Divided the array is among mid-Index*/
    int midIndex = leftIndex + (rightIndex - leftIndex)/2;
    /*Now Left sub-array*/
    mergeSortDivided(elements, leftIndex, midIndex);
    /*Now right sub-array*/
    mergeSortDivided(elements, midIndex+1, rightIndex);
    mergeSortConquer(elements, leftIndex, midIndex, rightIndex);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    #ifndef OnlineJudge
        freopen("InputData.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    const unsigned int size = 5;
    int elements[size];
    unsigned short int testCase = 1;
    while(testCase <= 120){
        cout<<testCase<<": Case = ";
        for(unsigned int i = 0; i < size; i++){
        cin>>*(elements + i);
        }
        mergeSortDivided(elements, 0, size-1);
        for(int x : elements){
            cout<<x<<" ";
        }
        cout<<endl;
        testCase++;
    }
    return 0;
}
