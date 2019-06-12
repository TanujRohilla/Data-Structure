/* Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S. */

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];

		ll sum=0,flag=0;
		ll g=0;
		for(ll i=0;i<n;i++){
			if(arr[i]==s){
				cout<<i+1<<" "<<i+1;
				g=1;
				break;
			}
		}
		if(g==0){
			for(ll i=0;i<n-1;i++){
				sum=arr[i];
				for(ll j=i+1;j<n;j++){
					sum=sum+arr[j];
					if(sum==s){
						cout<<i+1<<" "<<j+1;
						flag=1;
						break;
					}
					else if(sum>s)
						break;
				}
				if(flag==1)
					break;
			}	
		
			if(flag==0){
				cout<<"-1";
			}
		}
		cout<<endl;
	}
}