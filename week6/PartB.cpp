#include<bits/stdc++.h>
#define ll long long
using namespace std;
//int a[3] = {1,2,3,4,5};
char a[3] = "ab";
bool majority(bool a, bool b, bool c)
{
    return (a&b)|(a&c)|(b&c);
}
bool eq(int a[], int b[], int n)
{
    for(int i = 0;  i < n; i++)
    {
        if(a[i] != b[i] ) return 0;
    }
    return 1;
}

/*
3, 1000 lan
4. 17
5
6. Error
7 D
8 A
9 D
10 B
11 C
12 B
13 D
14 D
15 A
16 B
17 A
18 A
19 B
20 D
21 B
22 C
23 C
24 B
25 D
26 B

*/
void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)";
}


 int function1(int k)  {
     k++;
     return k;
}

int main()  {
    int k=30;
    k = function1(k = function1(k = function1(k)));
    cout << "k=" << k;
    return 0;
}
