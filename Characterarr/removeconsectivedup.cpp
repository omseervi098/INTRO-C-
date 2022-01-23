/*Input:
aabbcadd
abcad
*/
#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    int j=1;
    char c=input[0];
    for(int i=1;input[i]!=0;i++)
    {
        if(input[i]!=c)
        {
            c=input[i];
            input[j]=input[i];
            j++;   
        }
    }
    input[j]='\0';
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}