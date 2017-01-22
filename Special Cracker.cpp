#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
    //    for(int i=0;i<n;i++)
    //    cout<<A[i]<<" ";
    //    cout<<endl;
        int j = 0;
        int k = 0;
        for(int i=0;i<n-1;i+=2){
            if(A[i]!=A[i+1]){
                cout<<A[i]<<endl;;
                k = 1;
                break;
            }
        }
        if(k==0)
            cout<<A[n-1]<<endl;;
    }
	return 0;
}
