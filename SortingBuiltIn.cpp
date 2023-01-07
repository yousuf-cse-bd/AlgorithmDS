/**
 * @file SortingBuiltIn.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sorting randomed elements by built-in sort function not vector collection
 * @version 0.1
 * @date 2023-01-07
 * @since SaturDay; 05:28 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr size_t limit {20};
    int *listInt = new int[limit];
    srand(time(nullptr));
    cout<<"Unsorted random elements: ";
    for(size_t i {0}; i < limit; i++){
        *(listInt + i) = (rand() % limit); 
        cout<<*(listInt + i)<<setw(3);
    }
    cout<<endl;
    sort(listInt, listInt + limit); /*We can not used here vector*/
    /*Ranged base for loop does not support dynamic array, so here used regular for-loo*/
    cout<<"Sorted randomed elements: ";
    for(size_t i{0}; i < limit; i++){
        cout<<*(listInt + i)<<setw(3);
    }
    delete [] listInt;
    return 0;
}
