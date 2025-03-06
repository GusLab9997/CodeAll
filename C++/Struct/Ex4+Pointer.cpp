#include <iostream>
#include <string>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    Point *pPoint = new Point;
    
    pPoint->x = 10; //ชี้ไปที่ x และใส่ค่า 10
    pPoint->y = 20; //ชี้ไปที่ y และใส่ค่า 20

    Point *pPoint2 = pPoint; // สร้าง pointer ชี้ไปที่ pPoint
    pPoint2->x = 30; // ชี้ไปที่ x และใส่ค่า 30
    
    cout<<"the point is at ("<<pPoint->x<<", "<<pPoint->y<<")"<<endl;
    cout<<"the point2 is at ("<<pPoint2->x<<", "<<pPoint2->y<<")"<<endl;

    delete pPoint;
}