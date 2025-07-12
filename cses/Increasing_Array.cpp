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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll ans = 0;
    for(ll i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        else{
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
            
        }
    }
    cout << ans << endl;
}
