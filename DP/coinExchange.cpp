#include <iostream>
using namespace std;
int count(int arr[],int m,int n){
    if(n==0){
        return 1;
    }
    if((n>=1 && m<0) || n<0){
        return 0;
    }
    return count(arr,m-1,n)+count(arr,m,n-arr[m]);
}
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
	    int result = count(arr,m-1,n);
	    cout<<result<<endl;
	}
	return 0;
}