#include<bits/stdc++.h>
using namespace std;
int s, e, cnt;
void solve(int i){
    if(i>e)return;
    if(i==e){
        cnt++;
        return;
    }
    solve(i+1);
    solve(i+2);
    solve(i+3);
}
int main()
{
    cin>>s>>e;
    solve(s);
    cout<<cnt;
    return 0;
}