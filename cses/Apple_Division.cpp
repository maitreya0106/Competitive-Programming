#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(int ind, vector<ll>& a, ll sum1, ll sum2){
    if(ind==a.size()){
        return abs(sum1-sum2);
    }
    ll chose = f(ind+1,a,sum1+a[ind],sum2);
    ll not_chose = f(ind+1,a,sum1,sum2+a[ind]);
    return min(chose,not_chose);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    
    cout << f(0,a,0,0);


}