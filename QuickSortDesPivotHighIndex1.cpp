/**
 * @file QuickSortDesPivotHighIndex1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief The quick sort (des) algorithm using for-loop and not support random numbers
 * @version 0.1
 * @date 2023-05-24
 * @since WednesDay; 11:02 AM
 * @copyright Copyright (c) 2023
 * @time_coplexity: Best-Case: O(n*log(n)), Average-Case: O(n*log(n)), Worst-Case: O(log(n^2))
 * @space_coplexity: O(log(n)) 
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const ssize_t partition(vector <int> &listInt, const ssize_t lowerIndex, const ssize_t higherIndex){
    int pivot {listInt.at(higherIndex)};
    ssize_t j {lowerIndex};
    for(ssize_t i {lowerIndex}; i < higherIndex; i++){
        if(listInt.at(i) > pivot){ /*Ascending order <*/
            swap(listInt.at(i), listInt.at(j));
            j++;
        }
    }
    swap(listInt.at(j), listInt.at(higherIndex));
    return j;
}
void quickSortAscending(vector <int> &listInt, const size_t lowerIndex, const size_t higherIndex){
    if(lowerIndex >= higherIndex){
        return;
    }else{
        const ssize_t p {partition(listInt, lowerIndex, higherIndex)}; /*Partition may become 1, p-1 so ignore negative index*/
        quickSortAscending(listInt, lowerIndex, p-1);
        quickSortAscending(listInt, p+1, higherIndex);
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {6, 3, 8, 4, 7, 5};
    cout<<"Unsorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<setw(3);
    }
    cout<<endl;
    quickSortAscending(listInt, 0, listInt.size()-1);
    cout<<"AsSorted elements: ";
    for(const auto &x: listInt){
        cout<<x<<setw(3);
    }
    cout<<endl;
    return 0;
}
