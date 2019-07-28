#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll maxHistogram(ll arr[],ll n){
    stack<ll> s;
    ll i,maxarea=0,area=0;
    for( i=0;i<n;){
        if(s.empty() || arr[s.top()]<=arr[i]){
            s.push(i);
            i++;
        }
        else{
            ll top=s.top();
            s.pop();
            
            if(s.empty())
                area=arr[top]*i;
            
            else
                area=arr[top]*(i-1-s.top());
        
            if(maxarea<area)
                maxarea=area;
        }
    }
    while(!s.empty()){
        ll top=s.top();
        s.pop();
            
            if(s.empty())
                area=arr[top]*i;
            
            else
                area=arr[top]*(i-1-s.top());
        
            if(maxarea<area)
                maxarea=area;
    }
    return maxarea;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,res;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	        cin>>arr[i];
	    res=maxHistogram(arr,n);
	    cout<<res<<endl;
	}
	return 0;
}