/**
 * @file SecondLargestElement.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find second largest element from a vector
 * @version 0.1
 * @date 2023-03-16
 * @since ThursDay; 05:05 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
using namespace std;

void secondLargestElement(vector <int> &intVector){

    int firstLargetElement {intVector.at(0)}; /*Max number*/
    int secondLargestElement {intVector.at(1)};

    size_t index {0};

    for(size_t i {2}; i < intVector.size(); i++){

        if(firstLargetElement < intVector.at(i)){
            secondLargestElement = firstLargetElement;
            firstLargetElement = intVector.at(i);
            index = i;
        }
        else if(firstLargetElement > intVector.at(i) && secondLargestElement < intVector.at(i)){
            secondLargestElement = intVector.at(i);
            index = i;
        }
    }        
   
    if(firstLargetElement == secondLargestElement){
        cout<<"There is no second largest element..!"<<endl;
    }
    else{
        cout<<"The second largest element: "<<secondLargestElement<<endl;
        cout<<"Second largest element's index: "<<index<<endl;
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    vector <int> intVector {1, 0, 5, 6, -2, -5, 3, 9, 10, -1, 6};
    secondLargestElement(intVector);
    return 0;
}
