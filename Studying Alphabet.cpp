#include <iostream>
using namespace std;
 
int main(){
	int A[26];
	for(int i=0;i<26;i++)
		A[i]=0;
	string S;
	cin>>S;
	int i=0;
	while(S[i]){
		A[S[i]-'a']=1;
		i++;
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string C;
		cin>>C;
		int j=0;
		int p=0;
		while(C[j]){
			if(A[C[j]-'a']==0)
				p=1;
			j++;
		}
		if(p==1)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
} 
