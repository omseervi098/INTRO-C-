/*
   abcde
   baedc
output:
  true
*/
#include <iostream>
#include <cstring>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    int n1=strlen(input1),n2=strlen(input2);
    int a[256]={0},b[256]={0};
    for(int i=0;i<n1;i++)
    {
        int idx=(int)(input1[i]);
        a[idx]+=1;
    }
    for(int i=0;i<n2;i++)
    {
        int idx=(int)(input2[i]);
        a[idx]-=1;
    }int i;
    for(i=0;i<256;i++)
    {
        if(a[i]!=0)
        {
            break;
        }
    }
    if(i==256)
    {
        return 1;
    }else
        return 0;
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}