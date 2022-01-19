#include<bits/stdc++.h>
using namespace std;
void printSubstrings(char input[]) {
    int k=0;
    for(;input[k]!=0;k++)
    {
        for(int i=k;input[i]!=0;i++)
        {
            for(int j=k;j<=i;j++)
            {
                  cout<<input[j];
            }
            cout<<endl;
        }
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}