#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,l,r;
		cin>>n>>l>>r;
		bitset<numeric_limits<ll>::digits> binary(n);
		for(ll i=l-1;i<=r-1;i++){
			binary.flip(i);
		}
		cout<<binary.to_ulong();
		cout<<endl;
	}
}