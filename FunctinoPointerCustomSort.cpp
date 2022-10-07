/**
 * @file FunctinoPointerCustomSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Advance pointer: Pointer function as real life example
 * @version 0.1
 * @date 2022-10-07
 * @since FriDay; 10:23 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
#pragma pack(1)
class CustomSort{
public:
    unsigned int size;
    int *arrayList;
    void inputDatas(void){
        srand(time(0));
        cout<<"Input Raw Datas: ";
        for(register unsigned int i = 0; i < size; i++){
            *(arrayList+i) = rand() % size;
            cout<<*(arrayList+i)<<" ";
        }
        cout<<endl;
    }   
public:
    CustomSort(unsigned int size){
        this->size = size;
        arrayList = new int[size];
        inputDatas();
    }
    /*Main priniciple of bubble sort algorithm, here function pointer like wrapper*/
    void customSort(bool (*compare)(int, int)){
        bool swapStatus = true;
        for(register unsigned int i = 1; i < size && swapStatus == true; i++){
            swapStatus = false;
            for(register unsigned int j = 0; j < size - i; j++){
                if(compare(*(arrayList+j), *(arrayList+j+1))){
                    swap(*(arrayList+j), *(arrayList+j+1));
                    swapStatus = true;
                }
            }
        }
    }
    /*Function Proto-type*/
    void showSortedDatas(void);
};
void CustomSort :: showSortedDatas(void){
    cout<<"Sorted Datas: ";
    for(register unsigned int i = 0; i < size; i++){
        cout<<*(arrayList+i)<<" ";
    }
    cout<<endl;
}
/*We can not declared as member functions of the class*/
bool ascendingCompare(int a, int b){
    return (a > b);
}
bool descendingCompare(int a, int b){
    return (a < b);
}

/*Driver code*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*Const does not take user input from keyboard*/
    /*const unsigned int size = 15;
    int arrayList[size] = {2, 1, 5, 4, 3};*/
    
    CustomSort mySort = CustomSort(15);
    mySort.customSort(ascendingCompare);
    mySort.showSortedDatas();
    mySort.customSort(descendingCompare);
    mySort.showSortedDatas();
    system("pause>0");
    return 0;
}
