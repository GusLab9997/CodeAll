#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    float gpa;
};

int main(){
    Student student1;

    student1.name="Gayu";
    student1.age=23;
    student1.gpa=3.5;

    cout<<"Name: "<<student1.name<<endl;
    cout<<"Age: "<<student1.age<<endl;
    cout<<"GPA: "<<student1.gpa<<endl;
}