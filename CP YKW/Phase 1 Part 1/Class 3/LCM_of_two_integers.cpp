#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int a, b; cin>>a>>b;
    cout<<(1LL*a*b)/__gcd(a,b);
    return 0;
}