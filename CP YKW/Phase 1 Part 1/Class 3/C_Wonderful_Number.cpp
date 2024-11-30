
#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(int n){
    string s; 

    for(int i=0; i < 32 ; i++){
        if(n & (1<<i))s.push_back('1');
        else s.push_back('0');
    }
    while(s.back() =='0'){
        s.pop_back();
    }
    string t = s;
    reverse(s.begin(), s.end());
    return s==t;
}

bool is_odd(int n){
    return n&1;
}

int main()
{
    int n; cin>>n; 
    if(is_palindrome(n) and is_odd(n)){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}