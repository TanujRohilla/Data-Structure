#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		bitset<numeric_limits<ll>::digits> binary(n);
		if(binary.test(k)==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}