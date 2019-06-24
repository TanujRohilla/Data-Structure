/* Given two arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array. */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,x,diff=10000,pos_i,pos_j,sum;
		cin>>n>>m;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		cin>>x;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				sum=arr1[i]+arr2[j];
				if(abs(x-sum)<diff){
					diff=abs(x-sum);
					pos_i=i;
					pos_j=j;
				}
			}
		}
		cout<<arr1[pos_i]<<" "<<arr2[pos_j]<<endl;
	}
}