#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		bitset<numeric_limits<ll>::digits> binary(n);
		for(ll i=0;i<binary.size();i+=2){
			int temp=binary[i+1];
			binary[i+1]=binary[i];
			binary[i]=temp;
		}
		cout<<binary.to_ulong()<<endl;
		
	}
}
