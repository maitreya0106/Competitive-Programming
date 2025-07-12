#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ans = INT_MIN;
    ll temp = 0;
    ll ans2 = INT_MIN;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        temp += x;
        ans2 = max(x, ans2);
        if(temp<0){
            temp=0;
        }else{
            ans = max(temp, ans);
        }
    }
    if(ans==INT_MIN){
        ans = ans2;
    }
    cout << ans << endl;


}
