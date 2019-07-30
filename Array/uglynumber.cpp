#include<bits/stdc++.h>
using namespace std;

int divide(int a,int b){
    while(a%b==0){
        a=a/b;
    }
    return a;
}
bool isUgly(int i){
    i=divide(i,2);
    i=divide(i,3);
    i=divide(i,5);
    return (i==1)?1:0;
    
}
int main(){
    //stack<int> s;
    //s.push(1);
    int n,count=0;
    cin>>n;
    int i=1;
    while(1){
        if(isUgly(i)){
            count++;
            if(count==n)
                break;
        }
        i++;
    }
    cout<<i;
    return 0;
}