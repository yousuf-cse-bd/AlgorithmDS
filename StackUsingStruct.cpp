/**
 * @file StackUsingStruct.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Consturct a stack used pointer-structure concept call by reference (Dimik)
 * @version 0.1
 * @date 2022-10-12
 * @since WednesDay; 05:26 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;
const unsigned int size = 5;
struct IntegerStack{
    int top;
    int data[size];
};

void push(IntegerStack &stack, int element){
    if(stack.top == size){
        cout<<"The stack is full..!"<<endl;
    }
    else{
        stack.data[stack.top++] = element;
    }
}

int pop(IntegerStack &stack){
    if(stack.top == 0){
        cout<<"The stack is empty...!"<<endl;
        return -1;
    }else{
        stack.top = stack.top - 1;
        return stack.data[stack.top];
    }
}

void showAll(IntegerStack &stack){
    if(stack.top == 0){
        cout<<"The stack is empty...!"<<endl;
    }else{
        for(int i = stack.top - 1; i>=0; i--){
            cout<<"Index["<<i<<"] = "<<*(stack.data+i)<<endl;
        }
    }
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    IntegerStack myStack;
    int element;
    short int option;
    myStack.top = 0;
    do{
        cout<<"\t1 for push()"<<endl;
        cout<<"\t2 for pop()"<<endl;
        cout<<"\t3 for showAll()"<<endl;
        cout<<"\t0 for EXIT..!"<<endl;
        cin>>option;
        switch (option)
        {
        case 0: cout<<"Exit...!"<<endl; break;
        case 1: cout<<"Enter an element here: ";
        cin>>element;
        push(myStack, element); break;
        case 2: element = pop(myStack);
        if(element != -1){cout<<element<<endl;}break;
        case 3: showAll(myStack);break;
        default:
            cout<<"Enter the right option...!"<<endl;
            break;
        }
    }while(option != 0);
    return 0;
}
