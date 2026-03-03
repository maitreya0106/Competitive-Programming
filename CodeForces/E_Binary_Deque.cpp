#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> forw(n,0);
    vector<ll> back(n,0);
    ll t_f = 0;
    ll t_b = 0;
    for(ll i=0; i<n; i++){
        if(a[i]==0){
            t_f++;
        }
        else{
            forw[i]=t_f;
            t_f=0;
        }
    }
    for(ll i=n-1; i>=0; i--){
        if(a[i]==0){
            t_b++;
        }
        else{
            back[i]=t_b;
            t_b=0;
        }
    }
    ll l = 0;
    ll r = n-1;
    ll sum = accumulate(a.begin(),a.end(),0LL);
    if(s>sum){
        cout << -1 << endl;
        return;
    }
    ll cnt = 0;
    while(l<r){
        if(a[l]==0){
            l++;
        }
        else if(a[r]==0){
            r--;
        }
        else{
            if(forw[l]>)
        }

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}