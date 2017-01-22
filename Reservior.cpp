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
    int t,n,m,x;
    t = getn();
    while(t--){
        char x;
        n = getn();
        m = getn();
        short int A[n][m];
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<m;j++){
                x = getchar();
            //    cout<<x;
                if(x=='A') A[i][j] = 0;
                else if(x=='W') A[i][j] = 1;
                else A[i][j] = 2;
            }
            getchar();
        //    cout<<endl;
        }
        bool xx = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]==0){
                    if(i!=n-1 && A[i+1][j]!=0){
                        xx = 1;
                        break;
                    }
                    else if(j!=0 && A[i][j-1]==1){
                        xx = 1;
                        break;
                    }
                    else if(j!=m-1 && A[i][j+1]==1){
                        xx = 1;
                        break;
                    }
                }
                else if(A[i][j]==1){
                    if(j==0 || j==m-1){
                        xx = 1;
                        break;
                    }
                    else if(i!=n-1 && A[i+1][j]==2){
                        xx = 1;
                        break;
                    }
                }
            }
        }
        if(xx==0){
            pc('y'),pc('e'),pc('s'),pc('\n');
        }
        else pc('n'),pc('o'),pc('\n');
    }
  
}   
