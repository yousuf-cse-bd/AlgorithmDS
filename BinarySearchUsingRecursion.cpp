/**
 * @file BinarySearchUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary search algorithm using recursion function with sorted elements
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 12:12 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Implementaion of binary search algorithm using recursive method*/
int binarySearchAlgorithm(int *elements, int x, int lowerValue, int upperValue){
    int mid = lowerValue + (upperValue - lowerValue)/2;
    if(lowerValue > upperValue){
        return -1; /*Recursion terminate: base condition*/
    }
    /*Main part of binary search*/
    if(*(elements+mid) == x){
        return mid;
    }
    else if(*(elements + mid) < x){
        return binarySearchAlgorithm(elements, x, mid+1, upperValue);
    }
    else{ /*(*(elements + mid) > x)*/
        return binarySearchAlgorithm(elements, x, lowerValue, mid-1);
    }
    /*New learn topic else satetment must be fill up,
    other wise the comipler will be provided warning*/
}

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int n = 10;
    int elements[n];
    /*Load elements*/
    for(unsigned short int i = 0; i < n; i++){
        *(elements+i) = i + 1;
        cout<<*(elements+i)<<" ";
    }
    int x, index;
    cout<<"\n";
    int lowerValue = 0, upperValue = n - 1;
    /*Check test case 0 to 12*/
    for(x = 0; x<=12; x++){
        index = binarySearchAlgorithm(elements, x, lowerValue, upperValue);
        if(index != -1){
            cout<<x<<" Found: "<<*(elements + index)<<" and Index: "<<index<<endl;
        }else{
            cout<<x<<" Not Found...!"<<endl;
        }
    }
    return 0;
}
