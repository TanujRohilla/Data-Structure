#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n-1];
		for(ll i=0;i<n-1;i++)
			cin>>arr[i];

		int result1= n*(n+1)/2;
		int result2=accumulate(arr,arr+n-1,0);
		cout<<result1-result2<<endl;
		/*
			Method - 2

		int val=0;
		for(ll i=1;i<=n;i++)
			val=val^i;
		int xorval=0;
		for(ll i=0;i<n-1;i++)
			xorval=xorval^arr[i];
		int result=xorval^val;
		cout<<result<<endl;

		*/
	}
}