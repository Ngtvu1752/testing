#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define fi first
#define se second
// set bit : x |= 1<<i;
#define bit(n,i) ((n>>i)&1)
using namespace std;
const int maxn = 2e5 + 1;
char * concat(const char * s1, const char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    char* c = new char[len1+1 + len2];
    strcpy(c,s1);
    int l = len1;
    for(int i= 0; i < len2; i++)
    {
        c[l] = s2[i];
        l++;
    }
    c[len1 + len2 +1] = '\0';
    return c;
}
int main()
{
#define taskname "respool"

    if (fopen(taskname ".inp", "r"))
    {
        freopen(taskname ".inp", "r", stdin);
        freopen(taskname ".out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    const char* s1 = "Hello";
    const char* s2 = "World";
    cout<<concat(s1,s2);
}


// Ctrl + Alt + N : chạy code, nó sẽ tự lưu, t cài cho cậu
