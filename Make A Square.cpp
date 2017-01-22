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
    int t,n;
    t = getn();
    while(t--){
        n = getn();
        int a1 = 0;
        int a2 = 0;
        int c = 0;
        int a,b;
        while(n--){
            a = getn();
            b = getn();
            if(a==b)
                c = 1;
            else if(a-b>0)
                a1 = 1;
            else
                a2 = 1;
        }
        if(c==1 || (a1 && a2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
} 
