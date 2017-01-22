#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n,k;
	long long int a,b,c;
	scanf("%d",&t);
	while(t--){
	    a = 0;
	    b = 0;
	    c = 0;
	    scanf("%d %d",&n,&k);
	    int A[n];
	    for(int i=0;i<n;i++) scanf("%d",&A[i]);
	    sort(A,A+n);
	    for(int i=0;i<k;i++) a+=A[i];
	    for(int i=n-1;i>=n-k;i--) b+=A[i];
	    for(int i=0;i<n;i++) c+=A[i];
	    printf("%lld\n",max(abs(c-2*a),abs(c-2*b)));
	}
	return 0;
}
