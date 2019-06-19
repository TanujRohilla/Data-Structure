/* Given an array of positive integers. Your task is to find the leaders in the array */

#include<bits/stdc++.h>
using namespace std;
#define ll signed long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,max=0,counter=0;
		cin>>n;
		ll arr[n],temp[n];
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}

		for(ll j=n-1;j>=0;j--){
			if(max<=arr[j]){
				max=arr[j];
				temp[counter]=max;
				counter++;
			}
		}
		for(ll k=counter-1;k>=0;k--){
			cout<<temp[k]<<" ";
		}
		cout<<endl;
	}
}