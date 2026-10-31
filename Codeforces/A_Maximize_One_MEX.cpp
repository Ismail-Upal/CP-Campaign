#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin >> n;
    map<string, vector<string>> prod;
    
    for(int i = 1; i <= n; i++){
        string nonterm;
        cin >> nonterm;

        int m; cin >> m;
        for(int j = 1; j <= m; j++){
            string gram; 
            cin >> gram;

            prod[nonterm].push_back(gram);
        }
    }

    map<string, vector<string>> newProd;

    for(auto i : prod){
        string nonterm = i.first;
        int ok = 0;

        vector<string> vtmp;

        for(auto s : i.second){
            string tmp = "";
            for(auto j : s){
                tmp += j;
                if(tmp == nonterm){
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }

        if(ok){
            vector<string> tmp;
            for(int j = 1; j < i.second.size(); j++) tmp.push_back(i.second[j]);

            string t = nonterm; t += "1";

            tmp.push_back(t);

            newProd[nonterm] = tmp;
            
            string x = "";
            for(int j = 1; j < i.second[0].size(); j++) x += i.second[0][j];

            x += t;

            newProd[t].push_back(x);
            newProd[t].push_back("e");
        }
    }

    for(auto i : newProd){
        cout << i.first << " -> ";
        for(auto s : i.second) cout << s << "  ";
        cout << endl;
    }


    


    return 0;
}
