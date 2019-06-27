#include<bits/stdc++.h>
#define ll signed long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,sum=0;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		for(ll i=0;i<n-1;i++){
			for(ll j=i+1;j<n;j++){
				ll res=arr[i]^arr[j];
				bitset<31> binary(res);
				cout<<binary<<endl;
				sum=sum+(2*binary.count());
			}
			
		}
		cout<<sum%1000000007<<endl;
	}
}
