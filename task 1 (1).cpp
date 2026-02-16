#include <iostream>
using namespace std;
int  sum(int arr[],int s){
	int su=0;
	for(int i = 0; i < s; i++){
		su+=arr[i];
	}
	return su;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the eleemnts";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
int res =	sum(arr,n);
cout<<"HEnce the sum of the array is "<<res<<endl;
return 0;
}