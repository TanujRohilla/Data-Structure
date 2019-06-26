#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		cin>>str;
		bitset<numeric_limits<ll>::digits> binary(str);
		if(binary.to_ulong%3==0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}
