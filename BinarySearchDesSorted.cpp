/**
 * @file BinarySearchDesSorted.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary search algorithm using recursion function with descending order sorted elements
 * @version 0.1
 * @date 2022-11-17
 * @since ThursDay; 09:50 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
/*But return type is better, because of midIndex can be conflict*/
void binarySearch(int *elements, int lowerIndex, int upperIndex, int &midIndex, int x){
    midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
    if(lowerIndex > upperIndex){
        midIndex = -1;
        return;
    }else if(*(elements + midIndex) == x){
        midIndex;
    }else if(*(elements + midIndex) < x){
        binarySearch(elements, lowerIndex, --midIndex, midIndex, x);
    }else{
        binarySearch(elements, ++midIndex, upperIndex, midIndex, x);
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned short int size = 10;
    int elements[size] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    for(int i = 0; i < size; i++){
        cout<<"Index["<<i<<"] = "<<*(elements + i)<<endl;
    }
    cout<<endl;
    int lowerIndex, upperIndex, midIndex;
    lowerIndex = 0, upperIndex = size - 1;
    for(int x = -1; x <= 12; x++){
        binarySearch(elements, lowerIndex, upperIndex, midIndex, x); /*Call by reference midIndex*/
        (midIndex != -1)?cout<<x<<" is found and index: "<<midIndex<<endl:
        cout<<"\t"<<x<<" is not found...!"<<endl;
    }
    
    return 0;
}
