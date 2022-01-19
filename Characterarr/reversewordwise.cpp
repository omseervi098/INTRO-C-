/*
Input:
WELCOME TO CODING NINJA
Output:
NINJA CODING TO WELCOME
*/
#include<iostream>
using namespace std;
void reverseStringWordWise(char input[]) {
    int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    int j=len-1,i=0;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;j--;
    }
    j=0;
    for(int i=0;i<=len;i++)
    {
        if(input[i]==' '||input[i]=='\0')
        {
            int en=i-1;
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
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

