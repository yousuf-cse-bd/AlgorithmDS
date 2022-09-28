/**
 * @file LinkListUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation an integer link list using recursive function
 * @version 0.1
 * @date 2022-09-28
 * @since WednesDay; 05:43 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Structure with self-referential*/
struct Node{
    int n;
    Node *next;
};
/*Add a new node uisng recursion method*/
void addNode(Node *link){
    cout<<"Enter a value [-1:Exit] here: ";
    cin>>link->n;

    if(link->n == -1){
        link->next = nullptr;
        // return;
    }else{
        link->next = (Node*) malloc(sizeof(Node)); //Creating a new node with malloc
        addNode(link->next);
    }
}

void printList(Node *head){
    if(head->n == -1){
        cout<<"Empty Node...!"<<endl;
        return;
    }
    cout<<"Print Elemeent:"<<endl;
    while (head->next != nullptr){
        /* code */
        cout<<head->n<<" ";
        head = head->next;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Node *head;
    head = (Node*) malloc(sizeof(Node));
    addNode(head);
    printList(head);
    free(head);
    return 0;
}
