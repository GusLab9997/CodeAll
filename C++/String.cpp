#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is "<< name << endl;
    char firstcharacter =  name[0];
    cout << "The first character of your name is: " << firstcharacter << endl;
    return 0;
    }