//aqui va el dfs
#include <iostream>
#include <vector>

using namespace std;

#define FOR(i,n,m) for(ll i=n; i<m; i++) //un #define es basicamente una sustitucion textual jeje para codear mas fast
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ri(a) scanf("%d",&a)
#define rii(a,b) scanf("%d %d",&a,&b)
#define lri(a) scanf("%lld",&a)
#define lrii(a,b) scanf("%lld %lld",&a,&b)
#define ms(obj,val) memset(obj,val,sizeof(obj))
#define debug true
#define dprintf debug && printf

int n,m; //n nodos y m aristas
vector<int> g[200000]; //vector para guardar el grafo

void dfs(int v){ // este es el que tal pino
  visit[v]=1;
  for(int u:g[v]){
    if(!visit[u]){
      dfs(u);
    }
  }
}

using namespace std;

int main(){
  rii(n,m);
  FOR(i,0,m){
    int a,b;
    rii(a,b);
    g[a].pb(b);
    g[b].pb(a);
  }
  dfs(0);
}
