#include <iostream>
#include <string>
using namespace std;

struct Point {
    int x;
    int y;
};

int main(){
    Point pt;
    pt.x = 10;
    pt.y = 20;

    Point pt2 = pt;
    pt2.x = 30;
    cout<<"pt.x = "<<pt.x<<endl;
    cout<<"pt2.x = "<<pt2.x<<endl;
}