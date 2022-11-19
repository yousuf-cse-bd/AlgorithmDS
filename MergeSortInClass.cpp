/**
 * @file MergeSortInClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented merge sort algorithm using a temp[] array with template data-type
 * @version 0.1
 * @date 2022-11-20
 * @since SunDay; 12:12 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

template <class DataType>
class MergeSort{
private: 
    DataType *elements;
    int size;
public:
    MergeSort(){
        // {2, 1, 5, 4, 3};
        cout<<"Enter a size of the list: ";
        cin>>size;
        size = (size < 0) ? size*(-1) : size;
        elements = new DataType[size];
    }
    void inputElements(void){
        for(int i = 0; i != size; i++){
            cout<<"Index["<<i<<"]: Elements = ";
            cin>>*(elements + i); 
        }
        mergeSortDivide(0, size-1);
    }
    void showElements(void){
        if(size == 0){
            cout<<"The array size is "<<size<<" so list empty..!"<<endl;
            return;
        }
        cout<<"The sorted elements: ";
        for(int i = 0; i != size; i++){
            cout<<*(elements + i)<<" ";
        }
        cout<<endl;
    }
    /*We can update const variable using recursion function not loop*/
    void mergeSortDivide(const int lowerIndex, const int upperIndex){
        /*If array's element is 0 or empty then terminate so base case*/
        if(lowerIndex >= upperIndex){
            return;
        }
        int midIndex = lowerIndex + (upperIndex - lowerIndex)/2;
        /*Make leftSubArray*/
        mergeSortDivide(lowerIndex, midIndex);
        mergeSortDivide(midIndex+1, upperIndex);

        /*Now merging*/
        mergeSortConquer(lowerIndex, midIndex, upperIndex);
    }

    void mergeSortConquer(const int lowerIndex, const int midIndex, const int upperIndex){
        /*i for left subArray's index, j for right subArray's index, k for tempArray's index*/ 
        int i, j, k;
        i = k = lowerIndex, j = midIndex + 1;
        DataType tempList[upperIndex + 1];
        /*Traversing parallelly both sub arrays*/
        while(i <= midIndex && j <= upperIndex){
            /*Comparing left sub array is less than right sub array*/
            if(*(elements + i) < *(elements + j)){
                *(tempList + k) = *(elements + i);
                k++, i++;
            }else{
                *(tempList + k) = *(elements + j);
                k++, j++;
            }
        }
        /*If remaining any array element of left sub array*/
        while(i <= midIndex){
            *(tempList + k) = *(elements + i);
            k++, i++;
        }
        /*If remaining any array element of right sub array*/
        while(j <= upperIndex){
            *(tempList + k) = *(elements + j);
            k++, j++;
        }
        /*Just copy to tempList to given array*/
        for(i = lowerIndex; i <= upperIndex; i++){
            *(elements + i) = *(tempList + i);
        }

    }
    ~MergeSort(){
        delete [] elements;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MergeSort <string> mergeSort;
    mergeSort.inputElements();
    mergeSort.showElements();
    system("pause>0");
    return 0;
}
