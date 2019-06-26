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
		if(binary.count()==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
}