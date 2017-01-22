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
    int t,n;
    t = getn();
    while(t--){
        char c;
	    int i = 0;
	    vector<int> A(26,0);
	    while((c=getchar())!='\n' && c!=EOF){
	        A[c-'a']++;
	        i++;
	    }
	    int x = 0;
	    int y = 0;
	    for(int i=0;i<26;i++){
	        if(A[i]>1) x+= (A[i]-1);
	        else if(A[i]==1) y++;
	    }
	    int z = 0;
	    while(x>0){
	        if(x%2==1){ x--;
	        for(int i=0;i<26;i++){
	            if(A[i]>1){
	                A[i]--;
	                break;
	            }
	        }
	        }
	        else{
	            if(y>0){
	                y--;
	                for(int i=0;i<26;i++){
	                    if(A[i]==1){
	                        A[i] = 0;
	                        break;
	                    }
	                }
	            }
	            else{
	                x--;
	                for(int i=0;i,26;i++){
	                    if(A[i]>1){
	                        A[i]--;
	                        break;
	                    }
	                }
	            }
	        }
	        z++;
	         x = 0;
	         y = 0;
	        for(int i=0;i<26;i++){
	            if(A[i]>1) x+= (A[i]-1);
	            else if(A[i]==1) y++;
	        }
	        
	    }
	    if(z%2==0){
	        printf("Watan\n");
	    }
	    else{
	        printf("Karan\n");
	    }
    }
	return 0;
}
 
