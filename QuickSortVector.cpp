/**
 * @file QuickSortVector.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implemented the quick sort algorithm vector collection ascending order
 * @version 0.1
 * @date 2023-01-03
 * @since TuesDay; 12:33 PM
 * @copyright Copyright (c) 2023
 * @time_coplexity: Best-Case: O(n*log(n)), Average-Case: O(n*log(n)), Worst-Case: O(log(n^2))
 * @space_coplexity: O(log(n)) 
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;

size_t partitionOfQuickSort(vector <int> &listInt, const size_t lowerIndex, const size_t upperIndex){
    int pivot {listInt.at(lowerIndex)};
    size_t i {lowerIndex}, j {upperIndex};
    while(i < j){
        while(listInt.at(i) <= pivot){ /*Ensure all left elements are small of pivot*/
            i++;
        }while(listInt.at(j) > pivot){ /*Ensure all right elements are big of pivot*/
            j--;
        }
        if(i < j){
            swap(listInt.at(i), listInt.at(j));
        }
    }
    swap(listInt.at(lowerIndex), listInt.at(j));
    return j; /*This is pivot's right index*/
}
void quickSortAlgorithm(vector <int> &listInt, const size_t lowerIndex, const size_t upperIndex){
    if(lowerIndex < upperIndex){
        size_t j {partitionOfQuickSort(listInt, lowerIndex, upperIndex)};
        quickSortAlgorithm(listInt, lowerIndex, j-1);
        quickSortAlgorithm(listInt, j+1, upperIndex);
    }    
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {9, 4, 3, 11, 15, 20, 2, 24, 30, 1, 35};
    cout<<"The unsorted elements are: ";
    for(const auto & x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    quickSortAlgorithm(listInt, 0, listInt.size()-1);
    cout<<"The sorted elements are: ";
    for(const auto & x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
