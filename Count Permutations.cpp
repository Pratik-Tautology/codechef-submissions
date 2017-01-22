#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
#define MOD 1000000007
using namespace std;
 
long long int pow(long long int x, long long int y)
{
    long long int temp;
    if( y <= 0)
        return 1;
    temp = pow(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%(MOD);
    else
        return (x*temp*temp)%(MOD);
}
 
int main(){
    long long int t,n;
    long long int count = 0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=1) cout<<0<<"\n";
        else cout<<pow(2,n-1) - 2<<"\n";
    }
} 
