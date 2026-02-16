#include <iostream>
using namespace std;
int *resizeArray(int *arr,int &capacity){
	int newcapacity = capacity * 2;
	int *newarr  = new int[newcapacity];
	for(int i = 0; i < newcapacity; i++){
		newarr[i] = arr[i];
	}
	delete[] arr;
	newcapacity = capacity;
	return newarr;
}
int main()
{
	int capcity = 2;
	int *arr = new int[capcity];
	int size = 0;
	cout<<"Ente the number";
	while(true){
		int num;
		cin>>num;
		if(num == -1){
			break;
		}
		if(size == capcity){
			arr = resizeArray(arr,capcity);
		}
		arr[size] = num;
		size++;
	}
	cout<<"Array elements: ";
	for(int i = 0; i < size; i++){
		cout<<arr[i] << " ";
	}
	delete[] arr;
	return 0;
}