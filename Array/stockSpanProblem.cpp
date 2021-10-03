#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int> st;
       st.push(n-1);
       vector<int> res(n,1);
       for(int i=n-2;i>=0;i--){
           while(!st.empty()&&price[st.top()]<price[i]){
               res[st.top()] = st.top()-i;
               st.pop();
           }
           st.push(i);
       }
       while(!st.empty()){
           res[st.top()] = st.top()+1;
           st.pop();
       }
       return res;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}