#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
char* reverse(const char* c)
{
    int len = strlen(c);
    char* a = new char[len+1];
    for(int i= 0, j = len -1 ; i<len;  i++, j--)
    {
        a[j] = c[i];
    }
    return a;
}
char* delete_char(const char* a, char c)
{
    int len = strlen(a);
    char *ans = new char();
    int j = 0;
    for(int i = 0; i < len; i++)
    {
        if(a[i] == c)
        {
            continue;
        }
        ans[j] = a[i];
        j++;
    }
    ans[j+1] = '\0';
    return ans;
}
char* pad_right(const char * a, int n)
{
    int len = strlen(a);
    char * c =new char[len+1];
    if(len >=n)
    {
        strncpy(c,a,len);
        c[n] = '\0';
        return c;
    }
    strncpy(c,a,len);
    for(int i = len; i < n; i++)
    {
        c[i] = '0';
    }
    c[n] = '\0';
    return c;
}
char* pad_left(const char* a, int n)
{
    int len = strlen(a);
    char * c =new char[len+1];
    if(len >=n)
    {
        strncpy(c,a,len);
        c[n] = '\0';
        return c;
    }
    strncpy(c,a,len);
    int j = 0;
    int N = n- len;
    for(int i = n-1; i >= 0; i--)
    {
        if(i >= N)
        {
            c[i] = c[i - N];
        }
        else c[i] = '_';
    }
    c[n] = '\0';
    return c;
}
char * truncate(const char*a, int n)
{
    int len = strlen(a);
    char * c =new char[len+1];
    strncpy(c,a,n);
    return c;
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
char *trimleft(const char * a)
{
    int len = strlen(a);
    char * c = new char[len+1];
    strncpy(c,a,len);
    int i = 0;
    while(c[i] == ' ' && i<len)
    {
        i++;
    }
    if(i > 0)
    {
        for(int j = 0; j <len -i+1; j++)
        {
            c[j] = c[j+i];
        }
    }
    return c;
}
int main()
{
    const char * s = "string";
//    cout<<reverse(s)<<'\n';
    //cout<<delete_char(s, 'g');
//    cout<<pad_right(s,8);
    cout<<pad_left(s,8);
    delete s;
}


// Ctrl + Alt + N : chạy code, nó sẽ tự lưu, t cài cho cậu

