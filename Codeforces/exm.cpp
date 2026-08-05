#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("input.txt");

    char ch;

    int ok = 1;
    while(file.get(ch)){
        if(isspace(ch)){
            if(ok) cout << endl;
            ok = 0;
        }
        else{
            ok = 1;
            cout << ch ;
        }
    }

    return 0;
}
