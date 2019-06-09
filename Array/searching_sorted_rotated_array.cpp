/* Searching a element in Sorted and Rotated array in O(log n) time */

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int low,int high,int key){
	int mid;
	while(low<high){
		mid = (high+low)/2;
		if(arr[mid]==key)
			return mid;
		else if (key<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}

}

int findPivot(int arr[],int low,int high){
	if (high<low)
		return -1;
	if(high==low)
		return low;
	int  mid = (high+low)/2;
	if(arr[mid]>arr[mid+1] && mid<high)
		return mid;
	if(arr[mid]<arr[mid-1] && mid>low)
		return mid-1;
	if(arr[low]>=arr[mid])
		return findPivot(arr,0,mid-1);

	return findPivot(arr,mid+1,high);

}

int pivotedBinarySearch(int arr[],int n,int key){
	int pivot = findPivot(arr,0,n-1);

	if (pivot==-1)
		return BinarySearch(arr,0,n-1,key);
	
	if (arr[pivot]==key)
		return pivot;

	if (arr[0]<=key)
		return BinarySearch(arr,0,pivot-1,key);

		return BinarySearch(arr,pivot+1,n-1,key);
}

int main(){
	int arr[]={3,4,5,6,1,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	int key=5;
	cout<<"Element found at index = "<<pivotedBinarySearch(arr,n,key);
}