#include<bits/stdc++.h>
using namespace std;

int path(int m,int n){
	if(m==1 || n==1)
		return 1;
	else
		return path(m-1,n)+path(m,n-1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,num;
		cin>>m>>n;
		num=path(m,n);
		cout<<num;
	}
}