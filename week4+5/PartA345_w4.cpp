#include <bits/stdc++.h>\

using namespace std;
int daytap[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};

int daytap1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};
char a = 32;
int main() {
//    cout<<a<<'\n'<<'a';
    for(int i= 0; i<2; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout<<daytap[i][j]<<' ';
        }
        cout<<'\n';
    }
    cout<<"aaaaaaaaaaaaaaaaaa"<<'\n';
    for(int i= 0; i<2; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout<<daytap1[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}


