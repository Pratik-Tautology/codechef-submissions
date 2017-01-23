#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int A[n][m];
        long long int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>A[i][j];
                c += A[i][j];
            }
        }
        bool check = 0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                if(A[i][j]+A[i+1][j+1]!=A[i][j+1]+A[i+1][j]){
                    check = 1;
                }
            }
        }
        if(check==1){
            cout<<-1<<"\n";
        }
        else{
            long long int k = 0;
            long long int p_min = 100000000000000;
            long long int p;
            while(c-n*k>=0){
                if((c-n*k)%m==0){
                    p = k + (c-n*k)/m;
                    if(p_min>p) p_min = p;
                }
                k++;
            }
            cout<<p_min<<endl;
        }
    }
    
    
    return 0;
}
