#include<bits/stdc++.h>
using namespace std;

void pallindrome(string str){
	int max_length,pos;
	int n=str.size();
	bool table[n][n];
	memset(table, 0, sizeof(table));

	// substring of length is always pallindrome
	for(int i=0;i<n;i++){
		table[i][i]=true;
		max_length=1;
	}

	// check for substring of length 2
	for(int i=0;i<n-1;i++){
		if(str[i]==str[i+1]){
			table[i][i+1]=true;
			max_length=2;
			pos=i;
		}
	}

	// check for substring of length greater then 2
	for(int k=3;k<=n;k++){
		for(int i=0;i<n-k+1;i++){
			int j=i+k-1;
			if(table[i+1][j-1] && str[i]==str[j]){
				table[i][j]=true;
				max_length=k;
				pos=i;
				
			}
		}
	}
	
	// printing of longest pallindrome
	for(int j=pos;j<pos+max_length;j++){
		cout<<str[j];
	}
}
int main(){
	string str;
	cin>>str;
	pallindrome(str);
}