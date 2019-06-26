#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int count_even=0,count_odd=0;
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++){
			if(str[i]=='1' && i%2==1)
				count_even++;
			else if(str[i]=='1' && i%2==0)
				count_odd++;
		}
		if(abs(count_even-count_odd)%3==0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}
