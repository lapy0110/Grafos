//aqui va el dfs
#include <iostream>
#include <vector>

int n,m;
vector<int> g[200000];

void dfs(int v){
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
