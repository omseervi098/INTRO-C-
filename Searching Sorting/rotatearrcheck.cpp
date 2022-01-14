/*
input:
1
6
4 5 6 1 2 3
Output:
3
*/
#include<iostream>
using namespace std;
int arrayRotateCheck(int *input, int size)
{
     for(int i=0;i<size-1;i++)
     {
         if(input[i]>input[i+1])
             return i+1;
     }
    return 0;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}