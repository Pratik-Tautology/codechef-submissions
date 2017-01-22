#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
 
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
 
int main(){
    int t;
    t = getn();
    long long int c,d,l;
    while(t--){
        c = getn(),d = getn(), l=getn();
        if(l%4==0 && 4*(c-d)<=l && 4*d<=l && l<=4*(c+d))
            pc('y'),pc('e'),pc('s'),pc('\n');
        else
            pc('n'),pc('o'),pc('\n');
    }
} 
