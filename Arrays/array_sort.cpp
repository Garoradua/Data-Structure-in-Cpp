#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
	for(int t=1; t<=n-1; t++)
	{
	for(int j=0; j<=n-t-1; j++)
	{
		if(arr[j]>arr[j+1]){
	swap(arr[j],arr[j+1]);
}
	}
	}
	for(int i=0; i<n; i++)
	{
	cout<<arr[i];
	}
}
int main()
{
	int arr[] = {2,1,4,3,7};
	int n = sizeof(arr) / sizeof(int);
	sort(arr,n);
	
	// cout<<arr[0

	arr[n-1];
}