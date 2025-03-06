#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4]; //กำหนด pointer ชี้ไปที่ตัวสุดท้ายของ arr

    cout<<"Traversing backwards: ";
    for(int i=4; i>=0; --i){ //วนลูปจากตัวสุดท้ายไปยังตัวแรก
        cout<<*ptr<<" "; //แสดงค่าที่ pointer ชี้
        ptr--; //ลดค่า pointer ลง 1
    }
}