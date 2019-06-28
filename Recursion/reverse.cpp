#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll sum=0,rem;

ll reverse(ll n){
	if(n>0){
		rem=n%10;
		sum=(sum*10)+rem;
		reverse(n/10);
	}
	else{
		return sum;
	}
}

int main(){
	ll t,result;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		result=reverse(n);
		cout<<result<<endl;
	}
}




