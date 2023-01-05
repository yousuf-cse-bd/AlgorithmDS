/**
 * @file QuickSortByBook.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The quick sort algorithm from text book and not support random numbers
 * @version 0.1
 * @date 2023-01-05
 * @since ThursDay; 11:30 AM
 * @copyright Copyright (c) 2023
 * @time_coplexity: Best-Case: O(n*log(n)), Average-Case: O(n*log(n)), Worst-Case: O(log(n^2))
 * @space_coplexity: O(log(n)) 
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
// #include <ctime>
using namespace std;

const size_t partition(vector <int> &listInt, const size_t lowerIndex, const size_t upperIndex){
    int pivot {listInt.at(lowerIndex)};
    size_t i {lowerIndex}, j {upperIndex};
    while(i <= j){
        while(listInt.at(i) >= pivot){
            i++;
        }
        while(listInt.at(j) <= pivot){
            j--;
        }
        if(i < j){
            swap(listInt.at(i), listInt.at(j));
        }
    }
    // swap(listInt.at(lowerIndex), listInt.at(j));
    listInt.at(lowerIndex) = listInt.at(j);
    listInt.at(j) = pivot;
    return j;
}

void quickSort(vector <int> &listInt, const size_t lowerIndex, const size_t upperIndex){
    if(lowerIndex < upperIndex){
        const size_t j {partition(listInt, lowerIndex, upperIndex)};
        quickSort(listInt, lowerIndex, j - 1);
        quickSort(listInt, j + 1, upperIndex);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {9, 4, 3, 11, 15, 20, 2, 24, 30, 1, 35};
    // vector <int> listInt {};
    // const size_t limit {20};
    // srand(time(nullptr));
    cout<<"Unsorted elements: ";
    // for(size_t i{0}; i<limit; i++){
    //     listInt.push_back(rand() % limit);
    //     cout<<listInt.at(i)<<" ";
    // }
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    quickSort(listInt, 0, listInt.size()-1);

    cout<<"Sorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
