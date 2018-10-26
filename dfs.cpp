//la cague pq agregue el dfs a la rama principal jeje, le agregue paja de la plantilla
#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<cstring>
#include<algorithm>
#include<math.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

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

const int INF = 0x3f3f3f3f;
const ll INFLL = 1e18;
const int MAXN = 1e6+5;
const int MOD = 1e9+7;

/////////////////////////////////////////////////////////////////////////////////////////////

int n,m; //n nodos y m aristas
vector<int> g[200000]; //vector para guardar el grafo

void dfs(int v){ // este es el que tal pino
  visit[v]=1;
  for(int u:g[v]){ //este es un for especial de c++, que es de pinga
    if(!visit[u]){
      dfs(u);
    }
  }
}

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
