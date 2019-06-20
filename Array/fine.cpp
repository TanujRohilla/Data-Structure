#include<bits/stdc++.h>
#define ll signed long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll c,d;
		cin>>c>>d;
		ll arr1[c],arr2[c],sum=0;

		for(ll i=0;i<c;i++)
			cin>>arr1[i];
		for(ll i=0;i<c;i++)
			cin>>arr2[i];

		if(d%2==0){
			for(ll i=0;i<c;i++){
				if(arr1[i]%2==1)
					sum+=arr2[i];
			}
		}
		else{
			for(ll i=0;i<c;i++){
				if(arr1[i]%2==0)
					sum+=arr2[i];
			}
		}
		cout<<sum;
		cout<<endl;
	}
}