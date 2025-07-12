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
    for(ll i=1; i<n; i++){
        ll temp = (a*arr[i-1]+b)%c;
        arr.push_back(temp);
    }
    ll ans = 0;
    for(ll i=0; i<k ;i++){
        ans+=arr[i];
    }
    ll j=0;
    ll sum = ans;
    for(ll i=k; i<n; i++){
        sum = sum+arr[i]-arr[j];
        j++;
            
        ans^=sum;

        
    }
    cout << ans << endl;
    
    
}
