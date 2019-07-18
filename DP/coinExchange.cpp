#include <bits/stdc++.h>
using namespace std;
/* int count(int arr[],int m,int n){
    if(n==0){
        return 1;
    }
    if((n>=1 && m<0) || n<0){
        return 0;
    }
    return count(arr,m-1,n)+count(arr,m,n-arr[m]);
}*/

 int count(int arr[],int m,int n){
    int table[n+1];
    memset(table,0,sizeof(table));
    table[0]=1;
    for(int i=0;i<m;i++){
        for(int j=arr[i];j<=n;j++){
            table[j]+=table[j-arr[i]];
        }
    }
    return table[n];
}
/* int count(int arr[],int m,int n){
    int table[m+1][n+1];
    memset(table,0,sizeof(table));
    for(int i=1;i<=m;i++){
        table[i][0]=1;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(arr[i-1]>j){
                table[i][j]=table[i-1][j];
            }
            else{
                table[i][j]=table[i-1][j] + table[i][j-arr[i-1]];
            }
        }
    }
    return table[m][n];
}*/
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    int arr[m];
	    for(int i=0;i<m;i++)
	        cin>>arr[i];
	    cin>>n;
	    int result = count(arr,m,n);
	    cout<<result<<endl;
	}
	return 0;
}