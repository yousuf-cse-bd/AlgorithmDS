/**
 * @file BinarySearchAscendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary Search Algorithm Ascending Order
 * @version 0.1
 * @date 2022-09-13
 * @since TuesDay; 11:43 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void binarySearching(int *A, unsigned int size = 10){
    int keyValue = 90;
    short int lowerIndex, upperIndex, midIndex;
    lowerIndex = 0, upperIndex = size - 1;
    while(lowerIndex <= upperIndex){
        midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        if(*(A+midIndex) == keyValue){
            cout<<"\t"<<keyValue<<" is found and index: "<<midIndex<<endl;
            return;
        }
        else if(*(A+midIndex) < keyValue){ /*If descending ordered '>'*/
            lowerIndex = midIndex + 1;
        }
        else{
            upperIndex = midIndex - 1;
        }
    }
    cout<<"\t"<<keyValue<<" is not found...!"<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int *A = (int*) malloc(sizeof(int));
    for(unsigned int i = 0; i<10; i++){
        *(A+i) = i+1;
        cout<<"Index["<<i<<"] = "<<*(A+i)<<endl;
    }
    binarySearching(A);
    free(A);
    return 0;
}
