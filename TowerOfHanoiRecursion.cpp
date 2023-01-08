/**
 * @file TowerOfHanoiRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation of tower of hanoi using recursion method which is bad
 * @version 0.1
 * @date 2023-01-08
 * @since SunDay; 04:43 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

/*Number of steps: 2^diskNumber - 1*/
void towerOfHanoi(const size_t diskNumber, const char *const source, const char *const temp, const char *const destination){
    if(diskNumber != 0){
        towerOfHanoi(diskNumber - 1, source, destination, temp);
        cout<<"Move "<<diskNumber<<" From "<<source<<" to "<<destination<<endl;
        towerOfHanoi(diskNumber - 1, temp, source, destination);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const char *const tower1 {"Left Tower"};
    const char *const tower2 {"Mid Tower"};
    const char *const tower3 {"Right Tower"};
    // cout<<tower1<<"\t"<<tower2<<"\t"<<tower3<<endl;
    size_t diskNumber{0};
    cout<<"How many disk: ";
    cin>>diskNumber; 
    towerOfHanoi(diskNumber, tower1, tower2, tower3);
    return 0;
}
