// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {   
//     double a, b, c;
//     cin >> a >> b >> c;

//     if(a + b > c)
//         cout << "YES\n";
//     else if(b + c > a)
//         cout << "YES\n";
//     else if(a + c > b)
//         cout << "YES\n";
//     else
//         cout << "NO\n";

    

    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    const double EPS = 0;

    if((a + b > c + EPS) && (b + c > a + EPS) && (a + c > b + EPS))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
