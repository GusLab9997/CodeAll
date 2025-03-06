#include <iostream>
using namespace std;

int main(){
    int age[2];
    int sumAge;

    cout<<"กรุณาป้อนอายุคนที่ 1: ";
    cin>>age[0];
    cout<<"กรุณาป้อนอายุคนที่ 2: ";
    cin>>age[1];
    sumAge = age[0] + age[1];
    cout<<"ผลรวมอายุของคน 2 คน คือ: "<<sumAge<<endl;
    return 0;
}