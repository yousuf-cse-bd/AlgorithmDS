/**
 * @file RecursionExFactorial.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Positive integer calculate factorial value using recursive method
 * @version 0.1
 * @date 2022-10-04
 * @since TuesDay; 11:45 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

/*Factorial always positive integer is supported*/
unsigned long long int factorial(unsigned short int n){
    if(n <= 1){
        return 1;
    }else{
        return (n*factorial(n-1));
    }
    /*There is no warning for return statement in brace.
    But we saw in binary search(recursive method) a warning...?*/
}

/*Driver Code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int n = 10;
    cout<<n<<"! Factoarial = "<<factorial(n)<<endl;
    return 0;
}
