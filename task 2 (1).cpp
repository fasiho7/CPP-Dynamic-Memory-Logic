#include <iostream>
#include <cstring>
using namespace std;

int   countRepeatedLetters(char *word){
	int len = strlen(word);
	char count ;
	int repeat = 0;
	for(int i = 0; i < len; i++){
		int count= 1;
		for(int j = i+1; j< len; j++){
			if(word[i] == word[j])
{
	count++;
		}
		if(count > repeat)
		repeat = count;
		
				}
	}
	return repeat;
}
 int main()
 {
 	string str;
 	cout<<"Enter the string";
 	getline(cin, str);
 	int res;
 	
 	char arr[100];
 	strcpy(arr, str.c_str());
 	int maxRepeat = 0;
 	string maxword;
 	
 	
 	char *word = strtok(arr, " ");
 	while (word != NULL){
 		 res = countRepeatedLetters(word);
 		 if(res > maxRepeat){
 		 	maxRepeat = res;
 		 	maxword = word;
		  }
 		 word = strtok(NULL, " ");
	 }
	 cout << "Word with highest repeats: " << maxRepeat<< endl;
	 return 0;
 }