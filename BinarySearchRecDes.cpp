/**
 * @file BinarySearchRecDes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Binary search algorithm using recursion function with descending-order sorted elements
 * @version 0.1
 * @date 2022-11-17
 * @since ThursDayl 11:39 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class BinaraySearch{
private:
    DataType *elements;
    unsigned int size;
public:
    BinaraySearch(unsigned int size){
        this->size = size;
        elements = new DataType[size];
    }
    void setElements(void){
        for(unsigned int i = 0; i != size; i++){
            *(elements + i) = i + 1;
        }
    }
    void getElements(void){
        cout<<"The elements are: ";
        for(unsigned int i = 0; i != size; i++){
            cout<<*(elements + i)<<" ";
        }
        cout<<endl;
    }
    void bubbleSortDescendingOrder(void){
        bool swapStatus = true;
        for(unsigned int i = 0; i < (size - 1) && swapStatus == true; i++){
            swapStatus = false;
            for(unsigned int j = 0; j<size -(i+1); j++){
                if(*(elements + j) < *(elements + j + 1)){
                    swap(*(elements + j), *(elements + j + 1));
                    swapStatus = true;
                }
            }
        }
    }
    int binaraySearchAlgorithm(int lowerIndex, int upperIndex, DataType xValue){
        int midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        if(lowerIndex > upperIndex){
            return -1;
        }else if(*(elements + midIndex) == xValue){
            return midIndex;
        }else if(*(elements + midIndex) > xValue){ /* if '<' ascending-order*/
            return binaraySearchAlgorithm(++midIndex, upperIndex, xValue);
        }else{
            return binaraySearchAlgorithm(lowerIndex, --midIndex, xValue);
        }
    }
    ~BinaraySearch(){
        delete [] elements;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int size = 10;
    BinaraySearch <int> binaraySearch(size);
    binaraySearch.setElements();
    cout<<"\tBefore Sorting..."<<endl;
    binaraySearch.getElements();
    binaraySearch.bubbleSortDescendingOrder();
    cout<<"\tAfter Sorting..."<<endl;
    binaraySearch.getElements();

    int lowerIndex, upperIndex, midIndex;
    lowerIndex = 0, upperIndex = size - 1;
    for(int xValue = 0; xValue <= size + 2; xValue++){
        midIndex = binaraySearch.binaraySearchAlgorithm(lowerIndex, upperIndex, xValue);
        (midIndex != -1)? cout<<"The "<<xValue<<" is found and its index "<<midIndex<<endl:
        cout<<"The "<<xValue<<" is not found..!"<<endl;
    }
    return 0;
}
