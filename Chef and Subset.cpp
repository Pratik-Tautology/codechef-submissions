#include <bits/stdc++.h>
 
using namespace std;
 
bool check(long long int a,long long int b,long long int c,long long int d){
    if(a==0) return true;
    if(b==0) return true;
    if(c==0) return true;
    if(d==0) return true;
    if(a+b==0) return true;
    if(a+c==0) return true;
    if(a+d==0) return true;
    if(b+c==0) return true;
    if(b+d==0) return true;
    if(c+d==0) return true;
    if(a+b+c==0) return true;
    if(a+b+d==0) return true;
    if(a+c+d==0) return true;
    if(b+c+d==0) return true;
    if(a+b+c+d==0) return true;
    return false;
}
 
int main()
{
    long long int t,a,b,c,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(check(a,b,c,d)==true){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
