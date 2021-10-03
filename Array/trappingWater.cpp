#include<bits/stdc++.h>

using namespace std;


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        // code here
        long long wat=0;
        int leftmax=0,rightmax=0;
        int l=0,r=n-1;
        while(l<r){
            if(a[l]<=a[r]){
                if(a[l]>=leftmax)leftmax=a[l];
                else{
                    wat+=leftmax-a[l];
                }
                l++;
            }
            else{
                if(a[r]>=rightmax)rightmax=a[r];
                else{
                    wat+=rightmax-a[r];
                }
                r--;
            }
        }
        return wat;
    }
};


int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
} 