/**
 * @file LinearSearchAlgorithm.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Implementation of linear search algorithm
 * @version 0.1
 * @date 2022-09-27
 * @since TuesDay; 09:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;
/*Most easy searching algorithm*/
void linearSearchAlgorithm(unsigned int *elements, unsigned int n, unsigned int key){
    for(unsigned short int i = 0; i<n; i++){
        if(*(elements+i) == key){
            cout<<"Found: "<<*(elements+i)<<" at Index: "<<i<<endl;
            return;
        }
    }
    cout<<"Not Found..!"<<endl;
    free(elements);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int key, n = 10;
    unsigned int *elements = (unsigned int*) calloc(n, sizeof(unsigned int));
    srand(time(0));
    cout<<"All Element are below:"<<endl;
    for(unsigned short int i = 0; i<n; i++){
        *(elements+i) = rand() % n;
        cout<<*(elements+i)<<" ";
    }
    cout<<endl;
    cout<<"Enter Key Here: ";
    cin>>key;
    linearSearchAlgorithm(elements, n, key);
    free(elements);
    return 0;
}
