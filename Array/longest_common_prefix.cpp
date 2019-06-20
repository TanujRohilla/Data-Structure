#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,min=10000,count=0,flag=0;
		cin>>n;
		string str[n],w;
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		for(int i=0;i<n;i++){
			if(str[i].length()<min){
				min=str[i].length();
			}
		}
		for(int i=0;i<min;i++){
			char ch=str[0][i];
			for(int j=1;j<n;j++){
				if(str[j][i]==ch)
					flag++;
			}

			if(flag==n-1){
				count++;
			}
			else
				break;
			flag=0;
		}
		if(count!=0){
		for(int i=0;i<count;i++)
		    cout<<str[0][i];
		}
		else
		{
			cout<<"-1";
		}

	    cout<<endl;
		

	}

}