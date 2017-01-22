#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <list>
#include <cmath>
using namespace std;
 
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
 
using namespace std;
 
 
inline long long int getn(){
	long long int n = 0, c = gc(), f = 1;
	while(c != '-' && (c < '0' || c > '9')) c = gc();
	if(c == '-') f = -1, c = gc();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = gc();
	return n * f;
}
 
 
int main() {
    int n;
    n = getn();
    int A[n];
    for(int i=0;i<n;i++) A[i] = getn();
    int q,x,y,m,z;
    q = getn();
    long long int count = 0;
    while(q--){
        x = getn() - 1;
        y = getn() - 1;
        m = y-x+1;
        int B[m];
        for(int i=x;i<=y;i++) B[i-x] = A[i];
        sort(B,B+m);
       // for(int i=0;i<m;i++) cout<<B[i]<<" ";
    //    cout<<endl;
        count = 0;
        for(int i=1;i<m;i++){
            z = B[i] - B[i-1];
            count += (z*z);
      //      cout<<count<<endl;
        }
        printf("%lld\n",count);
    }
	return 0;
}
 
