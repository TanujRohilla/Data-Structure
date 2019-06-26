#include<bits/stdc++.h>
#define ll signed long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		if(n==0){
			cout<<"0"<<endl;
		}
		else{
			bitset<numeric_limits<ll>::digits> binary(n);
			for(i=binary.size()-1;i>=0;i--){
				if(binary[i]!=0)
					break;
			}
			for(ll j=i-1;j>=0;j--){
				binary[j]=binary[j+1]^binary[j];
			}
			cout<<binary.to_ulong()<<endl;
		}
	}
}