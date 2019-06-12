/* Program to Rotate an array by d-element */

#include <iostream>
#define MAX 1000
using namespace std;


void leftRotate(int arr[],int d,int n){
    int temp;
    for (int i=0;i<d;i++){
        temp=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=temp;
    }
}

int main() {
    int n,d;
    int arr[MAX];
	cin>>n;  // size of array
    cin>>d;  
	
    for(int i=0;i<n;i++)
	    cin>>arr[i];
	
    leftRotate(arr,d,n);
	
    for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}

}
