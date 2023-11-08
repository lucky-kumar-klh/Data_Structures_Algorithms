#include <bits/stdc++.h>
using namespace std;
int main(){

    string s1 = "Lucky";
    string s2 = "tomot";

    int s = 0, e = s2.size()-1;
    bool a = 1;
    while ( s <= e ){
        if ( s1[s] != s1[e] ){
            a = 0;
            break;
        }
        s++, e--;
    }
    
    if ( a ) cout << "Palindrome";
    else cout << "Not a Palindrome";

    return 0;
}