/**
 * @file OddEvenUsingBitWiseAnd.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find odd or even using bit-wise-and with ternary operator
 * @version 0.1
 * @date 2023-02-02
 * @since ThursDay; 07:04 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int positiveNumber {0};
    cout<<"Enter a positive number here: ";
    cin>>positiveNumber;

    positiveNumber = abs(positiveNumber);
    cout<<((positiveNumber & 1)?"odd":"even")<<endl;
    cout<<"-------------------------------------------"<<endl;
    constexpr size_t COUNT {100};
    for(size_t number{0}; number <= COUNT; number++){
        cout<<number<<" is "<<((number & 1)?"odd":"even")<<endl;
    }
    return 0;
}
