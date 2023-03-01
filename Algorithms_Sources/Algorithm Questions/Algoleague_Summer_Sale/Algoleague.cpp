#include <bits/stdc++.h>
using namespace std;
typedef long long int lint;
typedef pair <int,int> ii;
#define N 100005

int n, k, a[N];   // n=number of games, k=aziz's money, a[i]=price of game i


int main() {
	scanf("%d %d",&n ,&k);
	for(int i = 1; i <= n; i++)
		scanf("%d", a + i);
	int q;   // q=number of queries
	scanf("%d",&q);
	while(q--){
		int t;  // t=aziz's tolerance
		scanf("%d",&t);  
		int bas = lower_bound(a + 1, a + n + 1, k - t) - a;  // lower_bound returns the first element that is not less than k-t
		int son = lower_bound(a + 1, a + n + 1, k + t + 1) - a; // lower_bound returns the first element that is not less than k+t+1
		printf("%d\n", son - bas); 
	}
	return 0;
}