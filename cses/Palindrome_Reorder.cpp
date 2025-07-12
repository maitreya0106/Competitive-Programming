#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<ll> freq(26, 0); // Frequency array for all ASCII characters
    for (char c : s) {
        freq[c-'A']++;
    };
    string ans = "";
    ll cnt = 0;
    for(ll i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) { // If the frequency is odd
            cnt++;
            if(cnt > 1) { // More than one odd frequency means we cannot form a palindrome
                cout << "NO SOLUTION" << endl;
                return 0;
            }
             // Reduce the frequency by 1 to make it even
            ans += char(i + 'A'); // Add the character to the middle of the palindrome
            freq[i]--;
        }
    }
    string lhalf = "";
    for(ll i = 0; i < 26; i++) {
        while(freq[i] > 0) { // Add the even frequency characters to the palindrome
            lhalf += char(i + 'A'); // Add the character to the left half
            freq[i] -= 2; // Reduce by 2 since we added two characters
        }
    }
    string rhalf = lhalf; // Right half is the reverse of the left half
    reverse(rhalf.begin(), rhalf.end());
    ans = lhalf + ans + rhalf; // Construct the full palindrome
    cout << ans << endl; // Print the palindrome
    

}
