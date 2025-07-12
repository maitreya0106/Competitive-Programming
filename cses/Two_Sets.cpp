#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll total = (n*(n+1))/2;
    if(total%2==1){
        cout << "NO" << endl;
        return 0;
    }
    vector<ll> set1;
    vector<ll> set2;
    ll target = total/2;
    for(ll i=n; i>=1; i--){
        if(target>=i){
            set1.push_back(i);
            target-=i;
        }
        else{
            set2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (auto it: set1){
        cout << it << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (auto it: set2){
        cout << it << " ";
    }
    cout << endl;
}
