#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n; 
    cin>>n;
    
    long long even_sum = (n/2)*((n/2)+1);
    long long odd_sum = ((n+2-1)/2) * ((n+2-1)/2);
    cout<<even_sum - odd_sum;
    return 0;
}