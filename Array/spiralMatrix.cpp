#include<bits/stdc++.h>
using namespace std;

void printSpiral(int matrix[100][100],int row,int col){
    int r=0,c=0;
    while(c<col && r<row){
        for(int i=c;i<col;i++){
            cout<<matrix[r][i]<<" ";
            //r++;
        }
        r++;

        for(int i=r;i<row;i++){
            cout<<matrix[i][col-1]<<" ";
            //col--;
        }
        col--;

        for(int i=col-1;i>=c;i--){
            cout<<matrix[row-1][i]<<" ";
            //row--;
        }
        row--;
        for(int i=row-1;i>=r;i--){
            cout<<matrix[i][c]<<" ";
            //c++;
        }
        c++;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int matrix[100][100];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    printSpiral(matrix,m,n);
    return 0;
}