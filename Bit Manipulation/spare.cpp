#include<bits/stdc++.h>
#define ll signed long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,flag=0;
		cin>>n;
		bitset<numeric_limits<ll>::digits> binary(n);
		for(ll i=0;i<binary.size()-1;i++){
			if(binary[i]==1 && binary[i+1]==1){
				cout<<"0"<<endl;
				flag=1;
			}
		}
		if(flag==0)
			cout<<"1"<<endl;
	}
}
