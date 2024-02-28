// bai 9 (***)
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1e6+2;
ll n, a[maxn], b[maxn];
ll mi1 = INT_MAX, mi2 = INT_MAX;
int main()
{
    cin>>n;
    for(int i =1; i<=n;i++)
    {
        cin>>a[i]>>b[i];
        mi1 = min(a[i], mi1);
        mi2 = min(b[i], mi2);
    }
    cout<<mi1*mi2;
    return 0;
}
