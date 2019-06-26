#include<bits/stdc++.h>
#define ll unsigned long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		bitset<32> binary(n);
		bitset<32> reverse(0);
		for(ll i=0;i<binary.size();i++){
			reverse[binary.size()-i-1]=binary[i];
		}
		cout<<reverse.to_ulong()<<endl;
	}
}