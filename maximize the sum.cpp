#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
 
#define gc getchar_unlocked
 
using namespace std;
 
 
inline int getn(){
	int n = 0, c = gc(), f = 1;
	while(c != '-' && (c < '0' || c > '9')) c = gc();
	if(c == '-') f = -1, c = gc();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = gc();
	return n * f;
}
 
int main(){
    long long int t,n,k;
    t = getn();
    long long int s;
    long long int A[100000];
    long long int B[100000];
    while(t--){
        n = getn();
        k  =getn();
        s  = 0;
        for(int i=0;i<n;i++){
            A[i] = getn();
        }
        for(int i=0;i<n;i++){
            B[i] = getn();
        }
        for(int i=0;i<n;i++) s += (A[i]*B[i]);
        sort(B,B+n);
        if(-B[0]>B[n-1]){
            s -= k*B[0];
        }
        else
            s += k*B[n-1];
        cout<<s<<"\n";
    }
} 
