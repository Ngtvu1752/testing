#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[3] = {0,1,2};
char b[3] = {'a','b','m'};

void print(int a[], char b[])
{
    for(int i = 0; i < 3; i++)
    {
        cout<<a[i]<<' '<<&a[i]<<'\n';
    }
    cout<<"----------------------------"<<'\n';
    for(int i= 0; i<3; i++)
    {
        cout<<b[i]<<' ';
        cout<< (void *)&b[i]<<'\n';
    }
    // Nhận xét: Địa chỉ của các phần tử trong mảng a và b tăng dần.
    // Điều này cho thấy các phần tử trong mảng được lưu trữ liên tiếp trong bộ nhớ.
    // Địa chỉ của var1, var2, và var3 không theo quy luật nào cụ thể so với các mảng a và b.
    // Điều này cho thấy biến độc lập không được lưu trữ liên tiếp với mảng.
}
ll factorial(ll x)
{
    cout<<x<<' '<<&x<<'\n';
    if(x == 1) return 1;

    static int c = 0;
    c+= x;
    return x*factorial(x-1);
    // Nhận xét: Địa chỉ của x trong mỗi lần gọi hàm factorial khác nhau, cho thấy mỗi lần gọi hàm,
    //một khung ngăn xếp (stack frame) mới được tạo ra và biến địa phương x
    //được lưu trữ trong khung ngăn xếp đó.
    // Khoảng cách giữa các địa chỉ của x trong các lần gọi hàm liên tiếp chính
    //là kích thước của một khung ngăn xếp, bao gồm không chỉ biến x mà còn có thêm thông tin khác
    //như địa chỉ trở về (return address).
}

/*
Mảng được truyền theo cơ chế pass-by-reference. Điều này được chứng minh bởi việc địa chỉ của mảng không thay đổi khi truyền vào hàm.
String được truyền theo cơ chế pass-by-value. Điều này được chứng minh bởi việc địa chỉ của string thay đổi khi truyền vào hàm.
*/

void passByValue(int x) {
    cout << "Địa chỉ của tham trị trong hàm: " << &x << endl;
    x = 20;
}

void passByReference(int &y) {
    cout << "Địa chỉ của tham biến trong hàm: " << &y << endl;
    y = 30;
}



int main()
{
//    print(a, b);
    int x= 10, y = 10;
    cout << "Địa chỉ của đối số trước khi gọi hàm: " << &x <<endl;
    passByValue(x);
    cout << "Giá trị của đối số sau khi gọi hàm passByValue: " << x<< endl;

    cout << "Địa chỉ của đối số trước khi gọi hàm: " << &y << endl;
    passByReference(y);
    cout << "Giá trị của đối số sau khi gọi hàm passByReference: " << y<< endl;
    cout<<factorial(20);

}
