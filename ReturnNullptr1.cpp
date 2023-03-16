/**
 * @file ReturnNullptr1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief nullptr_t is data-type and nullptr is a value
 * @version 0.1
 * @date 2023-03-16
 * @since ThursDay; 09:48 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*nullptr_t is data-type and nullptr is a value*/
constexpr nullptr_t returnNullptr(void){
    return nullptr;
}

int main(int argc, const char *const argv[]){
    if(returnNullptr() == nullptr){
        cout<<"The value: "<<returnNullptr()<<endl;
        cout<<"Returned null-pointer is done!"<<endl;
    }
    else{
        cout<<"Returned null-pointer is NOT done!"<<endl;
    }
    return 0;
}