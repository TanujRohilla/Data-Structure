/* Program to generate powerset of given set */

#include<bits/stdc++.h>
using namespace std;

void powerset(char *arr){
	for(int i=0;i<pow(2,n);i++){
		for(int j=0;j<strlen(arr);j++){
			if(i & (1 << j))
				cout<<arr[j];
		}
		cout<<endl;
	}
}
int main(){
	char arr[100];
	gets(arr);
	powerset(arr);
	return 0;
}