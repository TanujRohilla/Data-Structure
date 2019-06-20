#include<bits/stdc++.h>
using namespace std;

int n;

void func(int n){
	if(n>0){
		cout<<n<<" ";
		func(n-5);
		cout<<n<<" ";
	}
	else {
		cout<<n<<" ";
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,temp,flag=0;
		cin>>n;
		func(n);
		cout<<endl;
	}
}