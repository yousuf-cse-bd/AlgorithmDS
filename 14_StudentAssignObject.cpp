/**
 * @file 14_StudentAssignObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief All data type are included for assigning object to another 
 * @version 0.1
 * @date 2022-10-03
 * @since MonDay; 07:50 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class Student{
private:
    const char *name;
    unsigned int id;
    float cgpa;
public:
    Student(const char *name, unsigned int id, float cgpa){
        this->name = name;
        this->id = id;
        this->cgpa = cgpa;
    }
    void showInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tStudent Information"<<endl;
    Student student1 = Student("Yousuf", 171311101, 3.35f);
    student1.showInfo();

    Student student2 = student1;
    student2.showInfo();
    return 0;
}
