/**
 * @file DeleteAnElementFromArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Delete an element from an existing array-list
 * @version 0.1
 * @date 2023-01-24
 * @since TuesDay; 01:02 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
void deleteAnElementFromArray(int *array, size_t size){
    ssize_t position {};
    cout<<"Enter a position for deletion: ";
    cin>>position;
    position = abs(position);
    if(position < size){
        for(ssize_t i {position}; i<size; i++){
            *(array + i) = *(array + i + 1);
        }
        cout<<"After deletion:"<<endl;
        for(size_t i {i}; i<size-1; i++){
            cout<<"Array["<<i<<"] = "<<*(array + i)<<endl;
        }
    }
    else{
        cout<<"Array index of bounds...!"<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    constexpr size_t size {10};
    int array [size];
    srand(time(nullptr));
    for(size_t i {i}; i<size; i++){
        *(array + i) = rand() % size;
        cout<<"Array["<<i<<"] = "<<*(array + i)<<endl;
    }
    deleteAnElementFromArray(array, size);
    return 0;
}
