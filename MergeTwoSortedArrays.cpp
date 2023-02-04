/**
 * @file MergeTwoSortedArrays.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Merging two sorted arrays using pointer function
 * @version 0.1
 * @date 2023-02-04
 * @since SaturDay; 10:49 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

/*To need pointer function's must be used HEAP memory*/
int *mergeTwoSortedArrays(const int *const arr1, const int *const arr2, const size_t &size1,  const size_t &size2){

    const size_t resultArraySize {size1 + size2};
    int *result = new int[resultArraySize];
    if(result == nullptr){
        cerr<<"NO memory allocation...!"<<endl;
        exit(0);
    }
    size_t i {0}, j {0}, k {0};
    while(i < size1 && j < size2){
        if(*(arr1 + i) < *(arr2 + j)){
            *(result + k) = *(arr1 + i);
            k++, i++;
        }
        else{
            *(result + k) = *(arr2 + j);
            k++, j++;
        }
    }

    while(i < size1){
        *(result + k) = *(arr2 + i);
        k++, i++;
    }

    while(j < size2){
        *(result + k) = *(arr2 + j);
        k++, j++;
    }
    return result;
    delete []result;
    result = nullptr;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int arr1 [] {1, 5, 6, 7};
    int arr2 [] {2, 5, 8, 9, 11};

    cout<<"Given arr1: ";
    for(const int &x1: arr1){
        cout<<x1<<" ";
    }
    cout<<endl;
    cout<<"Given arr2: ";
    for(const int &x2: arr2){
        cout<<x2<<" ";
    }
    cout<<endl;
    const size_t size1 {size(arr1)}, size2 {size(arr2)};

    int *result = mergeTwoSortedArrays(arr1, arr2, size1, size2);

    cout<<"Resutl: ";
    for(size_t i {0}; i < (size1 + size2); i++){
        cout<<*(result + i)<<" ";
    }    
    cout<<endl;
    result = nullptr;
    return 0;
}
