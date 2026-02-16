#include <iostream>
using namespace std;
int *reverseArray(int arr[ ], int size){
	int start = 0;
	int i = 0;
	int end = size-1;
while(start < end){
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
} 
return arr;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"ENter the  elements of the array";
	for(int i = 0; i  < n; i++){
		cin>>arr[i];
	}
 int *res = reverseArray(arr, n);

	cout<<"THE reverse array is  ";
	for(int i = 0; i < n; i++){
		cout<<res[i];
	}
	return 0;
}