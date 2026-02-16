#include <iostream>
using namespace std;
int maximun(int *arr,int n, int k){
	int sum = 0;
	int count = 0;
	int last = -1;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[i]!=last){
			count++;
			last = arr[i];
		}
		if(count<=k){
			sum+=arr[i];
		}
		else{
			break;
		}
	}
	return sum;
}
int main()
{
	int n;
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array";
   for(int i = 0; i < n; i++){
   	cin>>arr[i];
   }
   int k;
   cout<<"Enter the k";
   cin>>k;
   int res = maximun(arr,n,k);
   cout<<"The maximun number is :  "<<res<<endl;
   return 0;
}
