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

#define FOR(i,n,m) for(ll i=n; i<m; i++)
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int n,m;
vector<int> g[200000];
int visit[20000];

void bfs(){
	queue<int> q;
	q.push(0);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		if(visit[v]) continue;
		visit[v]=1;
		for(int u:g[v]){
			if(!visit[u]){
				q.push(u);
			}
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////
int main(){
	
	rii(n,m);
	FOR(i,0,m){
		int a,b;
		rii(a,b);
		g[a].pb(b);
		g[b].pb(a);
	}

	return 0;
}
