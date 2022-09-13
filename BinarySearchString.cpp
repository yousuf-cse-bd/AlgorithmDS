/**
 * @file BinarySearchString.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary Search Algorithm
 * @version 0.1
 * @date 2022-09-12
 * @since MonDay; 07:48 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)
class BinarySearchString
{
private:
    /* data */
    unsigned int size;
    string *names;
public:
    BinarySearchString(unsigned int size){
        this->size = size;
        names = new string[size];
    }
    void inputAllElements(){
        for(unsigned int i = 0; i<size; i++){
            cout<<"Index["<<i<<"] = ";
            cin>>*(names+i);
        }
    }
    void bubbleSortOptimul(){
        bool swapFlag = true;
        for(unsigned short int i = 0; i < (size-1) && swapFlag == true; i++){
            swapFlag = true;
            for(unsigned short int j = 0; j < size - (i+1); j++){
                if(*(names+j) > *(names+j+1)){
                    swap(*(names+j), *(names+j+1));
                    swapFlag = true;
                }
            }
        }
    }
    void outputAllEelements(){
        cout<<"All Element Below:"<<endl;
        for(unsigned int i = 0; i < size; i++){
            cout<<"Index["<<i<<"] = "<<*(names+i)<<endl;
        }
    }
    string toStringLowerCase(string anyString){
        string lowerString;
        for(unsigned int i = 0; i<anyString.length(); i++){
            lowerString += tolower(anyString[i]);
        }
        return lowerString;
    }
    void binarySearchAlgorithm(){
        string keyElement;
        cout<<"Enter a New Element Here: ";
        cin>>keyElement;
        keyElement = toStringLowerCase(keyElement);
        unsigned short int leftIndex, rightIndex, midIndex;
        leftIndex = 0, rightIndex = size - 1;
        while(leftIndex <= rightIndex){
            midIndex = leftIndex + (rightIndex - leftIndex)/2;
            if(*(names+midIndex) == keyElement){
                cout<<"\t"<<keyElement<<", Found the Element and index: "<<midIndex<<endl;
                return;
            }
            else if(*(names + midIndex) < keyElement){
                leftIndex = midIndex + 1;
            }else{
                rightIndex = midIndex - 1;
            }
        }
        if(leftIndex > rightIndex){
            cout<<"\t"<<keyElement<<", Not Found...!"<<endl;
        }
    }
    ~BinarySearchString(){
        cout<<"\t\tTHANKS...!"<<endl;
        delete names;
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    BinarySearchString *binarSearch = new BinarySearchString(5);
    binarSearch->inputAllElements();
    binarSearch->bubbleSortOptimul();
    binarSearch->outputAllEelements();
    binarSearch->binarySearchAlgorithm();
    delete binarSearch;
    /*There is no work execution statement after deleted objectVariable.*/
    // cout<<"Normal data flow..."<<endl;
    return 0;
}
