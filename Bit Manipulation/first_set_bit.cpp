#include<bits/stdc++.h>
#define ll signed long long
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		bitset<numeric_limits<ll>::digits> binary(n);
		if(!binary.any())
			cout<<"0"<<endl;
		else{

			for(ll i=0;i<binary.size();i++){
				if(binary[i]==1){
					cout<<i+1<<endl;
					break;
				}
			}
		}
	}
}