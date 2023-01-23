/**
 * @file InsertAnElementInArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insert an element of existing array with dynanamic memory allocation-deallocaion
 * @version 0.1
 * @date 2023-01-23
 * @since MonDay; 04:51 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void insertAnElementInArray(int *array, const int size){
    int positionForNewElement {0};
    cout<<"Enter position for new element: ";
    cin>>positionForNewElement;
    positionForNewElement = abs(positionForNewElement); /*toPositive*/
    if(positionForNewElement < size){
        for(int i {positionForNewElement+1}; i < size; i++){
            *(array + i) = (*array + i-1);
        }
        int newElement {0};
        cout<<"Enter the new element: ";
        cin>>newElement;
        *(array + positionForNewElement) = newElement;

        cout<<"After new Element:\n";
        for(unsigned int i {0}; i<size; i++){
            cout<<"Array["<<i<<"] = "<<*(array + i)<<endl;
        }
    }
    else{
        cout<<"\t\tArray index of bounds...!"<<endl;
    }
    array = nullptr;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    size = abs(size);
    int *array = new (nothrow) int [size + 1];
    if(array != nullptr){
        for(unsigned int i {0}; i < size; i++){
            cout<<"Array["<<i<<"] = ";
            cin>>*(array + i);
        }
        if(size!=0){
            cout<<"Before inserting array-list:\n";
            for(unsigned int i {0}; i<size; i++){
               cout<<"Array["<<i<<"] = "<<*(array + i)<<endl;
            }
            insertAnElementInArray(array, (size + 1));
        }
        
    }
    else{
        cout<<"The memory is invalid...!"<<endl;
    }

    delete []array;
    array = nullptr;
    return 0;
}
