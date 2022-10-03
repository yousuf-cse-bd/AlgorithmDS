/**
 * @file LinkList.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Create an integer link-list using structure and class for encapsulation
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 11:28 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
#pragma pack(1)
/*Self referential structure*/
struct Node{
    int x;
    Node *next;
};
/*Link list using structure and class for encapsulation*/
class LinkList{
private:
    Node *head;
public:
    LinkList(){ /*Default constructor*/
        /*Heap memory allocation my malloc()*/
        head = (Node*) malloc(sizeof(Node*));
        addNode(head); /*Calling member fucntions*/
        showList(head);
    }
    ~LinkList(){ /*Destrcutor for de-allocation HEAP memory*/
        cout<<"\n\tThanks..."<<endl;
        free(head);
    }
private:
    /*Add node using recursion function*/
    void addNode(Node *link){
        cout<<"\tEnter a number here not -1: ";
        cin>>link->x;
        /*Terminate using -1*/
        if(link->x == -1){
            link->next = nullptr;
        }else{
            link->next = (Node*) malloc(sizeof(Node));
            addNode(link->next);
        }
    }
    /*Print the list using showList()*/
    void showList(Node *head){
        if(head->next == nullptr){
            cout<<"The list is empty...!"<<endl;
            return;
        }
        cout<<"The list: ";
        while(head->next != nullptr){
            cout<<head->x<<" ";
            head = head->next;
        }
    }
};
/*Divter code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    LinkList myList;
    return 0;
}
