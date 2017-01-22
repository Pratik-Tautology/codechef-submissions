#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <list>
#include <utility>
 
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
    int t,n,x,y,max,index;
    t = getn();
    while(t--){
        n = getn();
        vector<pair<int,int> > P(n);
        for(int i=0;i<n;i++){
            x=getn();
            P[i] = make_pair(x,i);
        }
        sort(P.begin(),P.end());
        vector<list<int> > T(n);
        for(int i=0;i<n-1;i++){
            x=getn()-1,y=getn()-1;
            T[x].push_back(y);
            T[y].push_back(x);
        }
        for(int i=0;i<n;i++){
            list <int> :: iterator it;
            bool bx = 0;
            for(int j=n-1;j>=0 && bx==0;j--){
                bool  ax = 0;
                if(P[j].second!=i){
                    for(it=T[i].begin();it!=T[i].end();it++){
                        if(*it==P[j].second || i==P[j].second){
                            ax = 1;
                        }
                    }
                    if(ax==0){
                        bx = 1;
                        index = P[j].second;
                    }
                }
            }
            cout<<index+1;
            pc(' ');
        }
        pc('\n');
    }
    
        
}  
