// bai 9 (***)
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1e6+2;
string s;
vector<pair<int,int>> v;
ll dp[maxn][3];
int main()
{
    cin>>s;
    int cnt = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;
        }
        else
        {
            v.push_back({s[i]-'a' +1 ,cnt});
            cnt = 1;
        }
    }
    dp[0][0] = 1;
    dp[0][1] = 1;
    if(v[0].second > 1) dp[0][2] = 1;
    for(int i = 1; i < v.size(); i++)
    {
        dp[i][0] = dp[i-1][0];
        dp[i][1] = dp[i-1][1] + dp[i-1][0];
        dp[i][2] = dp[i-1][1] + dp[i-1][2];
        if(v[i].second > 1) dp[i][2] +=  dp[i-1][0];
        if(v[i-1].first == v[i+1].first && v[i].second == 1) dp[i][2]--;
    }
    cout<<dp[v.size()-1][2];
}
