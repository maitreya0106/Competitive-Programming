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

ll f(ll n, ll mod){
    if(n==1){
        return 2;
    }
    ll ans=1;
    while(n--){
        ans=(ans*2)%mod;

    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll mod = (1e9 + 7);
    ll ans = f(n,mod);
    cout << ans<< endl; // Calculate 2^n % mod
    
}
