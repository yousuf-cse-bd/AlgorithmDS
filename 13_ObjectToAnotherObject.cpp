/**
 * @file 13_ObjectToAnotherObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Bitwise copy: Assinging object to another object
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 07:16 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;
#pragma pack(1)

class MyClass{
public:
    int a, b;
    void add(){
        cout<<a+b<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    MyClass object1, object2;
    object1.a = 15;
    object1.b = 25;

    object1.add();
    object2 = object1; /*Assinging object to another object*/
    object2.add();

    return 0;
}
