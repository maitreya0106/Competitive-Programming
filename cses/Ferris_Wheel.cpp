#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll l = 0;
    ll r = n-1;
    while(l<=r){
        if(arr[l] + arr[r] <= x){
            ans++;
            l++;
            r--;
        } else {
            ans++;
            r--;
        }
    }
    cout << ans << endl;

    
}
