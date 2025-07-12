#include <bits/stdc++.h>
using namespace std;
#define ll long long

string f(ll x, ll n){
    string ans;
    for(ll i=n-1; i>=0; i--){
        ans+=((x>>i)&1)?'1':'0';
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll temp = n;
    n = 1 << n;
    for(ll i=0; i<n; i++){
        ll grey = i^(i>>1);
        cout << f(grey,temp) << "\n";
    }

    
}
