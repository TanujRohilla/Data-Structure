#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n, int sum){
    bool table[n+1][sum+1];
    memset(table,0,sizeof(table));

    for(int i=0;i<=n;i++)
        table[i][0]=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j<arr[i])
                table[i][j]=table[i-1][j];
            else
                table[i][j]=table[i-1][j] || table[i-1][j-arr[i]];
            
        }
    }
    return table[n][sum];
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,sum;
        cin>>n;
        int arr[n],result;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>sum;
        result = subsetSum(arr,n,sum);
        if(result)
            cout<<"True";
        else
            cout<<"False";
    }
    
}