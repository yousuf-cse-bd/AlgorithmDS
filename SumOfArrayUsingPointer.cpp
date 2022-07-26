/**
 * @file SumOfArrayUsingPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of array elements using pointer
 * @version 0.1
 * @date 2022-07-08
 * @since Friday, 7:00AM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int A[7] = {1, 2, 3, 4, 5 ,1 ,101};
    unsigned int sum = 0;
    int *ptr = A;
    while(*ptr <= A[6]){
        sum += *ptr;
        *ptr ++;
    }
    cout<<"Sum of them: "<<sum<<endl;
    return 0;
}
