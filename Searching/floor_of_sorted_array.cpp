#include<bits/stdc++.h>
#define ll signed long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x,i,flag=0;
		cin>>n>>x;
		ll arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		if(x>=arr[n-1]){
			cout<<n-1;
		}
		else if(x<arr[0]){
			cout<<"-1";
		}
		else{
			for(i=0;i<n;i++){
				if(x>=arr[i]){
					continue;
				}
				else{
					cout<<i-1;
					flag=1;
					break;
				}
			}
		}
		cout<<endl;
	}
}
