/* Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 
	Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it. */

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,flag=1;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
			cin>>arr[i];

		ll sum=0,sum2=0;
		if(n==1){
			cout<<"1";
		}
		else{
			for(ll i=1;i<n;i++)
				sum+=arr[i];

			for(ll i=1;i<n;i++){
				sum2+=arr[i-1];
				sum=sum-arr[i];
				if(sum2==sum){
					cout<<i+1;
					flag=0;
					break;
				}
			}
			if(flag==1)
		    	cout<<"-1";
			
		}
		
		
		cout<<endl;
	}

}