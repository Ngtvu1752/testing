#include<bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
};
struct Rect
{
    Point u;
    double w, h;
    const bool contains(const Point& p)
    {
        return ((p.x >= u.x && p.y <= u.y) && (p.x <= u.x + w && p.y >= u.y - h ));
    }
};
struct Ship
{
    Rect rect;
    string id;
    int dx, dy;
    void move()
    {
        rect.u.x += dx;
        rect.u.y += dy;
    }

};
void display(const Ship& ship)
{
    cout<<ship.rect.u.x<<' '<<ship.rect.u.y<<' '<<ship.id<<'\n';
}

void Phan3_8()
{
    Point p;
    cout<<"Địa chỉ của biến p"<<&p<<'\n';
    cout<<"Địa chỉ của trường x"<<&p.x<<'\n';
    cout<<"Địa chỉ của trường y"<<&p.y<<'\n';
    /*Nhận xét:
        - Địa chỉ của p.x và p.y là khác nhau suy ra mỗi trường trong struct đều được lưu ở một vị trí riêng biệt
        - Địa chỉ của p.x sẽ có địa chỉ thấp hơn p.y => Điều này phản ánh thứ tự khai báo trong struct
        - Ngoài ra, cũng sẽ thấy rằng địa chỉ của biến p (địa chỉ của cấu trúc) sẽ giống với địa chỉ của trường x.
        Điều này là do x là trường đầu tiên trong cấu trúc, do đó địa chỉ của p sẽ trỏ đến vị trí bắt đầu của cấu trúc, tức là vị trí của trường x.
    */
}

//Phan3_9
void truyenThamTri(Point p)
{
    cout<<&p<<'\n';
}
void truyenThamBien(Point &p)
{
    cout<<&p<<'\n';
}
Ship s[5];
int main()
{
    srand(static_cast<unsigned>(time(0)));
    Rect rect, r;
    cout<<"Nhap toa do RECT: "<<' ';
    cin>>rect.u.x>>rect.u.y>>rect.w>>rect.h;
    Point p;
    cout<<"Nhap toa do Point: "<<' ';
    cin>>p.x>>p.y;
    rect.contains(p);
    Ship ship;
    ship.rect = rect;
    cout<<"Nhap CODE Ship:"<<' ';
    cin>>ship.id;
    ship.move(r);
    display(ship);
    string s1 = "A";
    for(int i = 1; i <= 4; i++)
    {

        s[i].rect.u.x = rand();
        s[i].rect.u.y = rand();
        s[i].rect.h = rand();
        s[i].rect.w = rand();
        s[i].dx = rand();
        s[i].dy = rand();
        s[i].id = s1;
        s1 += to_string(i);
    }
    int t = 5;
    while(t--)
    {
        for(int i= 1; i<=4; i++)
        {
            s[i].move();
            display(s[i]);
        }
    }
    Point p;
    Phan3_8();
    truyenThamTri(p); // khi truyen tham tri chung ta co mot ban sao cua doi so p
    truyenThamBien(p);
    return 0;
}

