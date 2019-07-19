/*
Given a matrix of dimension r*c where each cell in the matrix can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

So, we have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. If it is impossible to rot every orange then simply return -1.
 */

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int r, int c, int i, int j){
    if(i>=0 && j>=0 && i<r && j<c)
        return 1;
    else
        return 0;
}
int rottenOrange(int arr[100][100], int r, int c){
    queue< pair<int,int> > q;
    int count=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==2)
                q.push(make_pair(i,j));
        }
    }
    q.push(make_pair(-1,-1));

    while(!q.empty()){
        pair<int,int> temp = q.front();
        q.pop();

        if(temp.first==-1 && temp.second==-1){
            count++;
            if(q.empty())
                break;
            else
                q.push(make_pair(-1,-1));
        }
        else{
            int i=temp.first;
            int j=temp.second;
                if(isSafe(r,c,i-1,j) && arr[i-1][j]==1){
                    q.push(make_pair(i-1,j));
                    arr[i-1][j]=2;
                }   
                if(isSafe(r,c,i+1,j) && arr[i+1][j]==1){
                    q.push(make_pair(i+1,j));
                    arr[i+1][j]=2;
                }
                if(isSafe(r,c,i,j-1) && arr[i][j-1]==1){
                    q.push(make_pair(i,j-1));
                    arr[i][j-1]=2;
                }
                if(isSafe(r,c,i,j+1) && arr[i][j+1]==1){
                    q.push(make_pair(i,j+1));
                    arr[i][j+1]=2;
                }    
        }
     }

     for(int i=0;i<r;i++){
         for(int j=0;j<c;j++){
             if(arr[i][j]==1){
                 return -1;
             }
         }
     }
     return count-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,result;
        cin>>r;
        cin>>c;
        int arr[100][100];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>arr[i][j];
        
        result = rottenOrange(arr,r,c);
        cout<<result<<endl;
    }
}