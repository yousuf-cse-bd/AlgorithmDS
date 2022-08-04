/**
 * @file BubbleSortDynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Bubble sorting algorithm implement using dynamic array
 * @version 0.1
 * @date 2022-08-02
 * @since TuesDay; 11:08 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
/*Function pointer with callback mechanism*/
int compare(int firstElement, int secondElement){
    if(firstElement < secondElement){
        return 1;
    }else{
        return -1;
    }
}
/*Bubble sorting technique descending order*/
void bubbleSort(int *A, unsigned int size, int (*compare)(int, int)){
    bool swappingStatus = true;
    for(unsigned int i = 0; i<size - 1 && swappingStatus == true; i++){
        swappingStatus = false;
        for(unsigned int j = 0; j<size - (i+1); j++){
            if(compare(*(A + j) , *(A + j + 1)) > 0){
                swap(*(A + j) , *(A + j + 1));
                swappingStatus = true;
            }
        }
    }
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cout<<"Enter an Integer Number Here: ";
    cin>>n;
    unsigned int size = (n < 0)? (-1)*n: n;
    cout<<size<<endl;

    int *A = (int*) calloc(size, sizeof(int));
    for(unsigned int i = 0; i<size; i++){
        *(A+i) = i + 1;
    }
    bubbleSort(A, size, compare);
    for(unsigned int i = 0; i<size; i++){
        cout<<"["<<i<<"] = "<<*(A+i)<<endl;
    }
    free(A);
    return 0;
}
