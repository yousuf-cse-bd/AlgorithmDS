/**
 * @file CreateLinkListUsingClass.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief A simple link list which consists double data type using recursion
 * @version 0.1
 * @date 2022-09-29
 * @since ThursDay; 05:19 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)
/*This class contains self referential pointe*/
class Node{
    public:
    double x;
    Node *next;
};
/*Add new node using recursion method*/
void addNode(Node *link){
    cout<<"Enter a value here not -1: ";
    cin>>link->x;

    if(link->x == -1){
        link->next = nullptr; //run time return nullptr
    }else{
        link->next = (Node*) malloc(sizeof(Node));
        addNode(link->next); //run time value assined into next node
    }
}
/*Show list using printList() method*/
void printList(Node *head){
    if(head->next == nullptr){
        cout<<"List is empty..!"<<endl;
        return;
    }
    cout<<"\nAll elments: ";
    while(head->next != nullptr){
        cout<<head->x<<" ";
        head = head->next;
    }
    cout<<endl;
}
/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node *head = (Node*) malloc(sizeof(Node));
    addNode(head);
    printList(head);
    free(head); // or (delete head)?

    return 0;
}
