/*
Given an integer, check whether it is Bleak or not.

A number ‘n’ is called Bleak if it cannot be represented as sum of a positive number x and set bit count in x, i.e., x + countSetBits(x) is not equal to n for any non-negative number x.

*/

#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,flag=0;
		cin>>n;
		for(ll i=0;i<n;i++){
			bitset<numeric_limits<ll>::digits> binary(i);
			if(n==i+binary.count()){
				cout<<"0"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"1";
	}
}