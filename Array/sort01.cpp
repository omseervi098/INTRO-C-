/*
Input:                    Output: 0 0 0 1 1 1
1
7
0 1 1 0 1 0 1
*/
#include <iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    int st=0,en=size-1;
    while(st<en)
    {
       if(input[st]==0)
       {
           st++;
       }else if(input[en]==1)
       {
           en--;
       }else if(input[st]==1 && input[en]==0)
       {
           int temp=input[st];
           input[st]=input[en];
           input[en]=temp;
           st++;en--;
       }
    }
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
		sortZeroesAndOne(input, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
	    cout << endl;
		delete[] input;
	}
	return 0;
}