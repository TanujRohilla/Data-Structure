#include<bits/stdc++.h>
using namespace std;

void permutation(string str,int l,int r){
	if(l==r){
		cout<<str<<" ";
		return;
	}
	else{
		for(int i=l;i<=r;i++){
			swap(str[i],str[l]);
			permutation(str,l+1,r);
			swap(str[i],str[l]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		permutation(str,0,str.size()-1);
		cout<<endl; 
	}
}