#include<iostream>

using namespace std;

int upperBound(int arr[],int n,int target);

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
	int index=upperBound(arr,n,target);
	if(index!=-1){
			cout<<"Index is::"<<index;

	}
	else{
		cout<<"Element not found....!!!";
	}
	
}
int upperBound(int arr[],int n,int target){

	int lwr=0,upr=n-1,mid=0;
	if(arr[lwr]>target){
		return -1;
	}
	while(lwr<upr){
		mid=(lwr+upr)/2;
		
		if(arr[mid]<target){
			lwr=mid+1;
			
		}
		else{
			upr=mid;
		}
		
	}
	
	return lwr;
	
}
