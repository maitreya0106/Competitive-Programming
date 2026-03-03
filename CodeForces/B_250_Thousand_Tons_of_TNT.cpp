#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        sort(a.begin(),a.end()); 
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 0;
        vector<ll> prefix(n), postfix(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            sum+=a[i];
            prefix[i] = sum;
        }
        sum = 0;
        for(int i=n-1; i>=0; i--){
            sum +=a[i];
            postfix[i] = sum;
        }
        for(int k = 1; k<n; k++){
            if(n%k==0){
                ans = max(ans,abs(prefix[k-1]-postfix[n-k]));
            }
        }
        cout << ans << endl;
    }

    return 0;
}
