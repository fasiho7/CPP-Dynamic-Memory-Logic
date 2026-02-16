#include <iostream>
using namespace std;
int *sortarray(int *arr,int size){
	int ind = 0;
	int* temp = new int[size];
	for(int i = 0; i < size; i++){
		if(*(arr+i) % 2!= 0){
			*(temp + ind) = *(arr+i);
			ind++;
		}
	}
	
	for(int i = 0; i < size; i++){
		if(*(arr+i) % 2== 0){
			*(temp + ind) = *(arr+i);
			ind++;
		}
	}
	return temp;
}
int main()
{
	int n;
	cout<<"Enter size:";
	cin>>n;
	int *arr = new int[n];	
cout<<"Enter the elements";	
	for(int i = 0; i < n; i++){
		cin>>*(arr+i);
	}
	int *sorted = sortarray(arr,n);
 cout << "The sorted array: ";
    for(int i = 0; i < n; i++){
        cout << *(sorted + i) << " ";
    }
    delete[] arr;
    delete[] sorted;	
}