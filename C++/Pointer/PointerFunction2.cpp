#include <iostream>
using namespace std;

void addNumber(int &a, int &b){
    a = a+b;
}

int main(){
    int num1=10, num2=20;
    addNumber(num1,num2);
    cout<<num1<<endl;
}