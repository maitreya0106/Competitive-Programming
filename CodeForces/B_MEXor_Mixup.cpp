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





void solve() {
    ll a,b; 
    cin >> a >> b;
    ll range = a-1;

    ll temp = 0;
    for(ll i=1; i<=range; i++){
        temp^=i;
    }
    if(temp<=range){
        cout << range << endl;
        
    }
    else{
        cout << range+1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
