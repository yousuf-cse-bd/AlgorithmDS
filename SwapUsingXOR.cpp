/**
 * @file SwapUsingXOR.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Swaping technique without third variable using XOR operator
 * @version 0.1
 * @date 2023-02-02
 * @since ThursDay; 07:25 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*XOR '^' operator work only integer typed data*/
constexpr void swapUsingXOR(int &term1, int &term2){
    term1 = term1 ^ term2; /*term1 = term1 + term2*/
    term2 = term1 ^ term2; /*term2 = term1 - term2*/
    term1 = term1 ^ term2; /*term1 = term1 - term2*/
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number1 {10}, number2 {-145};
    swapUsingXOR(number1, number2);
    cout<<"Number1: "<<number1<<"\t\tNumber2: "<<number2<<endl;

    return 0;
}
