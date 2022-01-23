/*
Welcome to Coding Ninjas
output:
emocleW ot gnidoC sajniN
*/
#include<bits/stdc++.h>
using namespace std;
void reverseEachWord(char input[]) {
    int len=strlen(input);
    int j=0,en=0;
    for(int i=0;i<=len;i++)
    {
        if(input[i]==' '||i==len)
        {
            en=i-1;
            while(j<en)
            {
                char temp=input[j];
                input[j]=input[en];
                input[en]=temp;
                j++;en--;
            }
            j=i+1;
        }
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}