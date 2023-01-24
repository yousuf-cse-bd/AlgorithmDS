/**
 * @file DeleteAnElementForEachTimes.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Delete an element from an existing array-list
 * @version 0.1
 * @date 2023-01-24
 * @since TuesDay; 06:51 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <ctime>
#pragma pack(1)
using namespace std;

class Deletion{
    /*Class Attributes*/
private:
    size_t limit{};
    vector <int> intVector {};
    /*Class member function*/
public:
    Deletion(const size_t limit):limit{limit}{
        for(size_t i {0}; i < limit; i++){
            intVector.push_back(rand() % limit);
        }
        display();
    }
    void display(void){
        for(size_t index {0}; index < limit; index++){
            cout<<"IntVector["<<index<<"] = "<<intVector.at(index)<<endl;
        }
    }
    void deleteAnElementFromList(const ssize_t position){

        if(position >= 0 && position < limit){
            if(intVector.empty()){
                cout<<"Your list is empty...!"<<endl;
                exit(0);
            }
            else{
                --limit;
                for(ssize_t i{position}; i<limit; i++){
                    intVector.at(i) = intVector.at(i+1);
                }
                cout<<"After deletion operation:"<<endl;
                display();
            }
        }
        else{
            cout<<"Your position index-value exceded...!"<<endl;
        }
    }
    ~Deletion(){}

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Deletion deletion {10};
    ssize_t position {0};
    do{
        cout<<"Enter a position here: ";
        cin>>position;
        deletion.deleteAnElementFromList(position);
    }while(position >= 0);
    cout<<"\t\t\tThanks..."<<endl;
    return 0;
}
