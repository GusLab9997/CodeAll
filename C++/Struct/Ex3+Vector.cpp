#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double score;
};

int main(){
    vector<Student> students;

    students.push_back({"Alice", 20, 3.5});
    students.push_back({"Bob", 21, 3.0});
    students.push_back({"Charlie", 22, 2.5});

    for(const auto &student : students){ // ข้อมูลใน students จะถูก copy ไปยัง student ที่เป็น reference
        //auto จะถูกแปลงเป็นประเภทข้อมูลของข้อมูลใน students ที่เป็น reference
        cout<<"Name: "<<student.name<<", Age: "<<student.age<<", Score: "<<student.score<<endl;
    }
}