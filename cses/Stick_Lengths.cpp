#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];

    }
    ll t = accumulate(arr.begin(), arr.end(), 0LL)/n;
    ll t2 = t+1;
    ll ans1 = 0, ans2 = 0;
    
    for (ll i = 0; i < n; i++) {
        ans1 += abs(arr[i] - t);
        ans2 += abs(arr[i] - t2);
    }
    cout << min(ans1,ans2) << endl;
    

}
