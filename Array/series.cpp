#include<bits/stdc++.h>
using namespace std;

void series(int n){
    int count;
    if(n==1){
        cout<<"1";
    }
    else if(n==2){
        cout<<"1 1";
    }
    else{
        cout<<"1 1 ";
        for(int i=3;i<=n;i++){
            count=1;
            for(int j=2;j<i;j++){
                
                int gcd=__gcd(j,i);
                if(gcd==1){
                    count++;
                }
            }
            cout<<count<<" ";
        }
    }
    

}
int main(){
    int n;
    cin>>n;
    series(n);
    return 0;

}