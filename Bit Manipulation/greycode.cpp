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
			bitset<numeric_limits<ll>::digits> greycode(0);
			for(i=binary.size()-1;i>=0;i--){
				if(binary[i]!=0)
					break;
			}
			greycode[i]=1;
			for(ll j=i-1;j>=0;j--){
				greycode[j]=binary[j+1]^binary[j];
			}
			cout<<greycode.to_ulong()<<endl;
		}
	}
}