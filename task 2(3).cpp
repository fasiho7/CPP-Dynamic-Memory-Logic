#include <iostream>
using namespace std;
int subsequence(char *arr, int size, char *arr1, int size1){
	int j = 0;
	for(int i = 0;  i < size; i++){
		if(arr[i] == arr1[j]){
			j++;
		}
		if(j == size1){
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n1;
	int n2;
	cout<<"Enter size the first string: ";
	cin>>n1;
	cout<<"Enter size the second string";
	cin>>n2;
	char *ptr = new char[n1];
	char *ptr1 = new char[n2];
	cout<<"Enet the  string";
	cin>>ptr;
	cout<<"Ente teh second string";
	cin>>ptr1;
	int res = subsequence(ptr,n1,ptr1,n2);
	cout<<res<<endl;
	delete[] ptr;
	delete[] ptr1;
	return 0;
}