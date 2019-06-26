#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,sum=0;
		cin>>n;
		for(ll i=0;i<=n;i++){
			bitset<numeric_limits<ll>::digits> binary(i);
			sum+=binary.count();	
		}
		cout<<sum<<endl;
		
	}
}