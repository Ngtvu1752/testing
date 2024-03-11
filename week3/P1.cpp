#include<iostream>
using namespace std;

struct Point {
    int x, y;
};

// Hàm in tọa độ điểm
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

// Hàm thay đổi giá trị của điểm (truyền tham trị)
void changeValueByValue(Point p) {
    p.x = 20;
    p.y = 30;
}

// Hàm thay đổi giá trị của điểm (truyền tham biến)
void changeValueByReference(Point &p) {
    p.x = 40;
    p.y = 50;
}

Point midPoint(const Point &a,const Point &b)
{
    Point m;
    m.x = a.x + b.x >>1;
    m.y = a.y + b.y >>1;
    return m;
}
int main() {
    Point point, mid, point1;
    point.x = 10;
    point.y = 12;
    point1.x = 4;
    point1.y = 6;
    // In tọa độ ban đầu
    print(point);
    changeValueByValue(point);
    print(point);
    changeValueByReference(point);
    print(point);
    mid = midPoint(point, point1);
    cout<<"Mid Point: "<<'\n';
    print(mid);
    return 0;
}
