#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    string s;
    cin >> s;
    ll ans = INT_MIN;
    ll count = 1;
    for(ll i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            count++;
        } else {
            ans = max(ans, count);
            count = 1;
        }
    }
    cout << max(ans, count) << endl;

}
