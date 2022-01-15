/*
ada 
true
racecar
true
adb
false
*/
#include<iostream>
using namespace std;
bool checkPalindrome(char str[]) {
    int count =0;bool check=false;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    int st=0,en=count-1;
    while(st<=en)
    {
        if(str[st]==str[en])
        {
           check=true;
            st++;en--;
        }else
        {
            check=false;
           break;
        }
        
    }
    return check;
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}