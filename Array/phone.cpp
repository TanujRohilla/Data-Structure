/* Possible word from phone digit */

#include<bits/stdc++.h>
using namespace std;
const char hashTable[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void printWordUntil(int d[],int curr_digit,char output[],int n){
	int i;
	if(curr_digit == n){
		cout<<output<<" ";
		return;
	}
	for(i=0;i<strlen(hashTable[d[curr_digit]]);i++){
		output[curr_digit]=hashTable[d[curr_digit]][i];
		printWordUntil(d,curr_digit+1,output,n);
		if(d[curr_digit]==0||d[curr_digit]==1)
			return;
	}
}

void printWord(int d[],int n){
	char result[n+1];
	result[n]='\0';
	printWordUntil(d,0,result,n);
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int d[n];
		for(int i=0;i<n;i++)
			cin>>d[i];
		printWord(d,n);
	cout<<endl;
	}
}	