#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(arr[i][j] == '.' && vis[i][j] == 0){
                ans++;
                queue<pair<ll,ll>> q;
                q.push({i,j});
                vis[i][j] = 1;
                while(!q.empty()){
                    auto [x,y] = q.front();
                    q.pop();
                    for(ll dx=-1; dx<=1; dx++){
                        for(ll dy=-1; dy<=1; dy++){
                            if(abs(dx) + abs(dy) == 1){ // Only horizontal and vertical movements
                                ll nx = x + dx;
                                ll ny = y + dy;
                                if(nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] == '.' && vis[nx][ny] == 0){
                                    vis[nx][ny] = 1;
                                    q.push({nx, ny});
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
            
}
