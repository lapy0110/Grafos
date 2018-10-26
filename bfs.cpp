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

ll a,b;

int main(){
	
	lrii(a,b); // a <= b
	a--;

	printf("%d\n", (-7)%3);

	/*if(a+1 == b){
		a++;
		ll ans = 0;
		for(ll i = 1; i*i<a; i++) if(a%i == 0) {ans += i; if(a/i != i) ans += a/i;} 
		printf("%lld\n",ans);
		return 0;
	}*/

	ll A = 0, B = 0, C = 0;	
	ll lim = min(b-a+1,a+1); 
	FOR(i,1,lim) C += (a%i-b%i);
	A = (b-a)*(a - lim + 1);
	FOR(i,a+1,b+1) B += b%i;
	printf("%lld %lld %lld\n",A, B, C);
	ll ans = (b+a)*(b-a) - A - B + C;

	printf("%lld\n",ans);


	return 0;
}
