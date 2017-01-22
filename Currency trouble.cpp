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
 
long long int gcd(long long int a,long long int b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
 
int main() {
    long long int t;
    t = getn();
	long long int n,a,b,c,m,x;
	while(t--){
	    n = getn();
	    m = n;
	    a = getn();
	    b = getn();
	    c = 0;
	    while(n--){
	        x = getn();
	        int i = 0;
	        while(x-a*i>=0){
	            if((x-a*i)%b==0){
	                c++;
	                break;
	            }
	            i++;
	        }
	    }
	    printf("%lld %lld\n",c,m-c);
	}
	return 0;
}
