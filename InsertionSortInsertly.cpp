/**
 * @file InsertionSortInsertly.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Insertion sorting algorithm with inserting method
 * @version 0.1
 * @date 2023-01-08
 * @since SunDay; 05:07 PM
 * @copyright Copyright (c) 2023
 * @time_complexity: Best-case: O(N), Average & Worst-Case: O(N^2)
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void insertionSort(vector <int> &listInt){
    for(size_t i{1}; i < listInt.size(); i++){
        size_t j{i};
        while(j >= 1 && listInt.at(j-1) > listInt.at(j)){  /*Ascending order*/
            swap(listInt.at(j-1), listInt.at(j));
            j--;
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {};
    constexpr int terminator {-1};
    int element {0};
    do{
        cout<<"Enter an element [-1 for eXit] here: ";
        cin>>element;
        if(element != terminator){
            listInt.push_back(element);
            insertionSort(listInt);
            if(listInt.size() == 1){
                cout<<"Now Sorted element: "<<listInt.at(0)<<endl;
            }
            else{
                cout<<"Now sorted elements: ";
                for(const int &x: listInt){
                    cout<<x<<setw(3);
                }
                cout<<endl;
            }
        }
    }while(element != terminator);
    if(!listInt.empty()){ /*Not empty the list*/
        cout<<"\nFinal Sorted list: ";
        for(const int &x: listInt){
            cout<<x<<setw(3);
        }
    }
    cout<<"\n\t\t\tThanks...!"<<endl;
    return 0;
}
