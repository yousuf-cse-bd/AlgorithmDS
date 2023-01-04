/**
 * @file QuickSortAscendingOrder.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented the quick sort algorithm vector collection ascending order
 * @version 0.1
 * @date 2023-01-04
 * @since TuesDay; 11:30 AM
 * @copyright Copyright (c) 2023
 * @time_coplexity: Best-Case: O(n*log(n)), Average-Case: O(n*log(n)), Worst-Case: O(log(n^2))
 * @space_coplexity: O(log(n)) 
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
#pragma pack(1)
using namespace std;

int partitionOfQuickSort(vector <int> &listInt, const int lowerIndex, const int upperIndex){
    int pivot {listInt.at(lowerIndex)};
    int i {lowerIndex}, j {upperIndex};
    while(i < j){ /*Outer loop just traversing all elements*/
        while(listInt.at(i) <= pivot){ /*Make sure left elements are less than or equal of pivot.*/
            i++;
        }
        while(listInt.at(j) > pivot){ /*Make sure right elements are greater than of pivot.*/
            j--;
        }
        if(i < j){
            swap(listInt.at(i), listInt.at(j));
        }
    }
    swap(listInt.at(lowerIndex), listInt.at(j));
    return j; /*Right index of pivot value*/
}
void quickSortAlgorithmDescendingOrder(vector <int> &listInt, const int lowerIndex, const int upperIndex){
    if(lowerIndex < upperIndex){
        int j{partitionOfQuickSort(listInt, lowerIndex, upperIndex)};
        quickSortAlgorithmDescendingOrder(listInt, lowerIndex, j-1);
        quickSortAlgorithmDescendingOrder(listInt, j+1, upperIndex);
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const size_t limit {30};
    vector <int> listInt(limit);
    srand(time(nullptr));
    cout<<"Unsorted elements: ";
    for(size_t i{0}; i < limit; i++){
        listInt.at(i) = (rand() % limit);
        cout<<listInt.at(i)<<" ";
    }
    cout<<endl;
    quickSortAlgorithmDescendingOrder(listInt, 0, listInt.size()-1);
    cout<<"Sorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
