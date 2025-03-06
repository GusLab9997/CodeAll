#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    float gpa;
};

int main(){
    Student students[3];

    students[0]={"Gayu",25,3.5};
    students[1]={"Raj",24,3.6};
    students[2]={"Ravi",26,3.7};

    for(int i=0;i<3;i++){
        cout<<"Student"<<i+1<<"\n"
        <<"Name: "<<students[i].name<<"\n"
        <<"Age: "<<students[i].age<<"\n"
        <<"GPA: "<<students[i].gpa<<"\n\n";
    }
}