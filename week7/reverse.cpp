#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
void reverse(char a[])
{
    int len = strlen(a);
    for(int i= 0; i<len/2; i++)
    {
        char tmp = a[i];
        a[i] = a[len -i-1];
        a[len-i-1] = tmp;
    }
}
void delete_char(char a[], char c)
{
    int j = 0;
    int len = strlen(a);
    for(int i = 0; i < len; i++)
    {
        if(a[i] != c)
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
}
void pad_right(char a[], int n)
{
    int len = strlen(a);
    if(len >=n) return;
    for(int i = len; i < n; i++)
    {
        a[i] = ' ';
    }
    a[n] = '\0';
}
void pad_left(char a[], int n)
{
    int len = strlen(a);
    if(len >= n) return;
    int j = 0;
    int N = n- len;
    for(int i = n-1; i >= 0; i--)
    {
        if(i >= N)
        {
            a[i] = a[i - N];
        }
        else a[i] = '_';
    }
    a[n] = '\0';
}
void truncate(char a[], int n)
{
    int len = strlen(a);
    if(len > n)
    {
        a[n] = '\0';
    }
}
bool is_palindrome(char a[])
{
    int len = strlen(a);
    for(int i = 0; i < len/2; i++)
    {
        if(a[i] != a[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
void trimleft(char a[])
{
    int len = strlen(a);
    int i = 0;
    while(a[i] == ' ' && i<len)
    {
        i++;
    }
    if(i > 0)
    {
        for(int j = 0; j <len -i+1; j++)
        {
            a[j] = a[j+i];
        }
    }
}
int main()
{
    char *a = new char[60];
    cin.getline(a, 60);
//    reverse(a);
//    cout<<"bai 1: "<<a<<'\n';
//    char c;
//    cin>>c;
//    delete_char(a,c);
//    cout<<"bai 2: "<<a<<'\n';
    int n;
    cin>>n;
//    pad_right(a,n);
//    cout<<"bai 3: "<<a<<'\n';
    pad_left(a,n);
//    truncate(a,n);
    cout<<"bai 4: "<<a<<'\n';
//    cout<<is_palindrome(a);
    delete[] a;
}


// Ctrl + Alt + N : chạy code, nó sẽ tự lưu, t cài cho cậu
