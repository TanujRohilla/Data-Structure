#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,count=0;
		cin>>n;
		bitset<numeric_limits<ll>::digits> binary(n);
		if(n==1){
			cout<<"YES"<<endl;
		}
		else{
			for(ll i=0;i<binary.size();i++){
			if(binary[i]!=0){
				break;
			}
			count++;
		}
		cout<<binary<<endl;
		cout<<"Count = "<<count<<endl;
		if(count%3==0 && count>0 && binary.count()==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
		

	}
}