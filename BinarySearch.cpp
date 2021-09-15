#include<iostream>

using namespace std;

int binarySearch(int arr[],int n,int target);

int main(){
	
	int n;
	cout<<"Enter number of elements::";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cout<<"Enter element::";
		cin>>arr[i];
	}
	
	int target;
	cout<<"Enter element you want to search";
	cin>>target;
	int index=binarySearch(arr,n,target);
	if(index!=-1){
			cout<<"Index is::"<<index;

	}
	else{
		cout<<"Element not found....!!!";
	}
	
}
int binarySearch(int arr[],int n,int target){

	int lwr=0,upr=n-1,mid=0;
	while(lwr<upr){
		mid=(lwr+upr)/2;
		if(arr[mid]==target){
			return  mid;
		}
		else if(arr[mid]>target){
			upr=mid;
		}
		else{
			lwr=mid+1;
		}
		
	}
	return -1;
	
}
