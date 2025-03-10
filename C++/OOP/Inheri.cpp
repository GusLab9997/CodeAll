#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected: // Accessible by derived class สืบทอดได้
  string brand;

public:
  Vehicle(string b) : brand(b) {} // Constructor

  void honk() const { cout << "Beep beep! This is a " << brand << ".\n"; }
};

// Derived class
class Car : public Vehicle { // Inherits from Vehicle
private:
  string model;

public:
  Car(string b, string m) : Vehicle(b), model(m) {} // Constructor

  void showModel() const { cout << "It is a " << model <<", Brand : "<<brand<< ".\n"; }
};

int main() {
  Car myCar("Toyota", "Corolla");
  myCar.honk();      // Accessing method from the base class
  myCar.showModel(); // Accessing method from the derived class
  return 0;
}