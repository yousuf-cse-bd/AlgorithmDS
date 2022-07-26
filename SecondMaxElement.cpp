/**
 * @file SecondMaxElement.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Second max element from array using bubble sort algoriithm concept.
 * @version 0.1
 * @date 2022-07-08
 * @since 12:00AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
/*Find second max element: Using bubble sort algorithm*/
void secondMaxElementFromArray(int A[], unsigned int n){
    bool flag = true;
    for(unsigned int i = 0; i<n-1 && flag == true; i++){
        flag = 0;
        for(unsigned int j = 0; j<n-(i+1); j++){
            if(A[j] < A[j+1]){
                swap(A[j], A[j+1]);
                flag = true;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int A[] = {1, 2, 3, 4, 5, 1, 101};
    unsigned int n = sizeof(A) / sizeof(int);
    secondMaxElementFromArray(A, n);
    for(auto x: A){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Second Max Element: "<<A[1]<<endl;
    return 0;
}
