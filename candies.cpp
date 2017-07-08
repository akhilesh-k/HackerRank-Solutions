#include<bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define inf 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define fr first
#define sc second
#define clr(a) memset(a,0LL,sizeof a);
using namespace std;

typedef unsigned long long ull;
typedef  long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
  
map<ll,vi> adj;
ll color[100010];        
ll cost;
ll n, m, clib, cpath;
 
void dfs(ll index, ll flag = 0LL){
  if(flag == 1LL){
    cost += clib;
  }else
    cost += cpath;
  color[index] = 1;
  for(int i = 0 ; i < adj[index].size() ; i ++){
    ll vertex = adj[index][i];
    if(!color[vertex]){
      dfs(vertex);
    }
  }
}
 
void solve(){
    ll t;
    cin >> t;
    while ( t-- ){
        adj.clear();
        cin >> n >> m >> clib >> cpath;
        for(int  i = 0 ; i < m ; i ++){
          ll u,v;
          cin >> u >> v;
          adj[u].pb(v);
          adj[v].pb(u);
        }
        if(clib <= cpath){
          cout << n * clib << endl;
        }else{
          memset(color, 0LL, sizeof(color));
          cost = 0;
          for(int i = 1 ;i <= n ; i ++){
            if(color[i] == 0){
              dfs(i,1LL);
            }
          }
          cout << cost << endl;
        }
    }
}
  
int main(){
std::ios::sync_with_stdio(0);
solve();
}  