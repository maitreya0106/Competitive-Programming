#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    ll x,a,b,c;
    cin >> x >> a >> b >> c;
    vector<ll> arr;
    arr.push_back(x);
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for(ll i=1; i<n; i++){
        ll temp = (a*arr[i-1]+b)%c;
        arr.push_back(temp);
    }

    deque<ll> dp;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        while(!dp.empty()&&arr[dp.back()]>=arr[i]){
            dp.pop_back();
        }
        dp.push_back(i);
        if(dp.front()<=i-k){
            dp.pop_front();
        }
        if(i>=k-1){
            ans^=arr[dp.front()];
        }
    }
    cout << ans << endl;
    
    
}
