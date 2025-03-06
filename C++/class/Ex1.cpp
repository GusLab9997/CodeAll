#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string n, int a):name(n), age(a){} //กำหนดค่าเริ่มต้นให้กับตัวแปร name และ age โดยใช้ constructor
        
    void greet() const { //เป็น function ที่ไม่สามารถแก้ไขค่าของ object ได้
            cout<<"Hello, my name is "<<name<<"and I am "<<age<<" years old."<<endl;
        }
    
};

int main(){
    Person person1("John", 21); //สร้าง object ชื่อ person1 โดยกำหนดค่าเริ่มต้นให้กับตัวแปร name และ age
    person1.greet(); //เรียกใช้ function greet
    cout<<person1.name<<endl;
    cout<<person1.age<<endl;
    Person person2("Jane", 22);
    person2.greet();
    return 0;
}