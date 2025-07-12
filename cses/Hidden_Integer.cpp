#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll left = 0;
    ll right = 1e9;
    while(left<=right){
        ll mid = right - (right-left)/2;
        cout << "? " << mid << endl;
        string response;
        cin >> response;
        if(response == "YES"){
            
            left = mid + 1;   
        } else if(response == "NO"){
            right = mid-1;
            
        }  
    }
    cout << "! " << left << endl;
    return 0;
    
    
}
