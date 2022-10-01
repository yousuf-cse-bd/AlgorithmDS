/**
 * @file StackUsingGlobalArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A stack is created by global array with pointer notation
 * @version 0.1
 * @date 2022-10-01
 * @since SaturDay; 10:03 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
const unsigned int MAX = 5;
int top = 0;
int stackList[MAX];
/*Here push for insert an element*/
void push(int element){
    if(top == MAX){
        cout<<"Stack overflow...!"<<endl;
        return;
    }
    *(stackList+top) = element;
    ++top;
}
/*Pop por peak an element from the stack*/
void pop(void){
    if(top != 0){
        --top;
        cout<<"Poped: "<<*(stackList+top)<<endl;
    }else{
        cout<<"Empty Stack..!"<<endl;
    }
}
/*Show the all element of stack*/
void display(void){
    if(top == 0){
        cout<<"Empty stack...!"<<endl;
        return;
    }
    for(unsigned short int i = 0; i < top; i++){
        cout<<"["<<i<<"] = "<<*(stackList+i)<<endl;
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    short int option;
    do{
        cout<<"\n<><><><><><><><><><><><><><><><><><><><>"<<endl;
        cout<<"\t1 for push()"<<endl;
        cout<<"\t2 for pop()"<<endl;
        cout<<"\t3 for display()"<<endl;
        cout<<"\t0 for EXIT...!"<<endl;
        cout<<"<><><><><><><><><><><><><><><><><><><><>"<<endl;
        cin>>option;
        int element;
        switch (option)
        {
        case 0: cout<<"Exit...!"<<endl; break;
        case 1: 
            cout<<"Enter an element here: ";
            cin>>element;
            push(element);
            break;
        case 2: pop(); break;
        case 3: display(); break;
        default: cout<<"Select the right option..!"<<endl; break;
        }
    } while (option != 0);
    
    return 0;
}

