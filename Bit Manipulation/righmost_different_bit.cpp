#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll m,n;
		cin>>m;
		bitset<numeric_limits<ll>::digits> M(m);
		cin>>n;
		bitset<numeric_limits<ll>::digits> N(n);
		if(m==n)
			cout<<"-1"<<endl;
		else{
			for(int i=0;i<max(M.size(),N.size());i++){
				if(M[i]!=N[i]){
					cout<<i+1<<endl;
					break;

				}
			}
		}

	}
}