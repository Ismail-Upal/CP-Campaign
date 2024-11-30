
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int n, k; cin >> n >>k;
    int cnt =0;
    while(n>0){
        n/=k;
        cnt++;
    }
    cout<<cnt;
    return 0;
}