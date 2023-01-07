/**
 * @file SumOfElements.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Sum of vector random elements with two methods
 * @version 0.1
 * @date 2023-01-07
 * @since SaturDay; 05:02 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

const size_t sum1(const vector <int> &listInt){
    size_t sum {0};
    for(const auto &x: listInt){
        sum += x;
    }
    return sum;
}

const size_t sum2(const vector <int> &listInt, const size_t size){
    if(size <= 0){
        return 0;
    }else{
        return sum2(listInt, size-1)+listInt.at(size-1);
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> listInt {};
    constexpr unsigned int limit {10};
    srand(time(nullptr));
    cout<<"Random Elements: ";
    for(unsigned int i{0}; i < limit; i++){
        listInt.push_back(rand()%limit);
        cout<<listInt.at(i)<<setw(3);
    }
    cout<<endl;
    cout<<"Sum of them: "<<sum1(listInt)<<" using loop iteration."<<endl;
    cout<<"Sum of them: "<<sum2(listInt, listInt.size())<<" using recursion function."<<endl;
    return 0;
}
