#include <iostream>
using namespace std;

// Define a class named 'Student'
class Student {
private:
  string name; // Private attribute
  int age;     // Private attribute

  void showPrivateName(){
    cout<<"this is private na:"<<(name+name)<<endl;
  }

public:
  // Constructor to initialize the attributes
  Student(string n, int a) {
    name = n;
    age = a;
  }

  // Getter for the name
  string getName() const { return name; }

  // Setter for the name
  void setName(string n) { name = n; }

  // Getter for the age
  int getAge() const { return age; }

  // Setter for the age
  void setAge(int a) { age = a; }

  // General method to display student details
  void displayDetails() {
    cout << "Student Name: " << name << ", Age: " << age << endl;
    showPrivateName();//calling private method
  }
};

int main() {
  // Create an instance of Student
  Student student1("John Doe", 20);

  // Display initial details
  student1.displayDetails();

  // Modify the student's name and age using setters
  student1.setName("Jane Doe");
  student1.setAge(21);

  // Display updated details
  student1.displayDetails();

  return 0;
}