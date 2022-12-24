/**
 * @file MergeSortDescendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented merge sort algorithm descending order using vector
 * @version 0.1
 * @date 2022-12-24
 * @since SaturDay; 11:07 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void mergeSortAlgorithm(vector <int> &vectorList, const size_t leftIndex, const size_t rightIndex);
void mergeSort(vector <int> &vectorList, const size_t leftIndex, const size_t midIndex, const size_t rightIndex);
void printList(vector <int> &vectorList){
    for(auto x: vectorList){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const size_t size {25};
    vector <int> vectorList (size); /*Fixt size of vector*/
    srand(time(nullptr));
    cout<<"Before sortiong elements: ";
    for(size_t i {0}; i < size; i++){
        vectorList.at(i) = (rand() % size); /*0 to size - 1*/
        cout<<vectorList.at(i)<<" ";
    }
    cout<<endl;
    mergeSortAlgorithm(vectorList, 0, size-1);
    cout<<"After sorting elements: ";
    printList(vectorList);
    return 0;
}
void mergeSortAlgorithm(vector <int> &vectorList, const size_t leftIndex, const size_t rightIndex){
    size_t midIndex {leftIndex + (rightIndex - leftIndex)/2}; /*Find mid*/
    if(leftIndex == rightIndex){ /*Base case, list will be single wise*/
        return;
    }else{
        mergeSortAlgorithm(vectorList, leftIndex, midIndex); /*Left sub-list*/
        mergeSortAlgorithm(vectorList, midIndex+1, rightIndex);/*Right sub-list*/
        mergeSort(vectorList, leftIndex, midIndex, rightIndex);
    }
}
void mergeSort(vector <int> &vectorList, const size_t leftIndex, const size_t midIndex, const size_t rightIndex){
    size_t i {leftIndex}, j {midIndex + 1}, k {leftIndex};
    vector <int> tempList (rightIndex + 1);
    while(i <= midIndex && j <= rightIndex){
        if(vectorList.at(i) > vectorList.at(j)){ /*'<' is generate ascending order*/
            tempList.at(k++) = vectorList.at(i++); /*Must make-sure postfix increment*/
            // i++, k++;
        }else{
            tempList.at(k++) = vectorList.at(j++);
            // j++, k++;
        }
    }
    while(i <= midIndex){
        tempList.at(k++) = vectorList.at(i++);
        // i++, k++;
    }
    while(j <= rightIndex){
        tempList.at(k++) = vectorList.at(j++);
        // j++, k++;
    }
    for(i = leftIndex; i <= rightIndex; i++){
        vectorList.at(i) = tempList.at(i);
    }
}
