/*
Input:                Output:
1                      3 4 5 6 1 2
7
1 2 3 4 5 6 7
2
*/
#include<iostream>
using namespace std;
void reverse(int *input,int st,int en)
{
    while(st<=en){
        int temp=input[st];
        input[st]=input[en];
        input[en]=temp;
        st++;en--;
    }
}
void rotate(int *input, int d, int n)
{
    if(d<=n && n!=0)
    {
        d%=n;
    }
    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}
		int d;
		cin >> d;
		rotate(input, d, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}