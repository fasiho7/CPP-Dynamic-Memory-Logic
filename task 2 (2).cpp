#include <iostream>
#include <cstring>
using namespace std;

int subsequence(char *s1, char *s2){
    int j = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for(int i = 0; i < len1; i++){
        if(s1[i] == s2[j]){
            j++;
        }
        if(j == len2){
            return 1;
        }
    }
    return 0;   
}
int main()
{
    string str1;
    string str2;

    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    char s1[1000];
    char s2[1000];
    strcpy(s1, str1.c_str());
    strcpy(s2, str2.c_str());

    int res = subsequence(s1, s2);

    cout << res << endl;

    return 0;
}
