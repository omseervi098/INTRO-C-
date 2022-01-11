/*
1
9
0 7 2 5 4 7 1 3 6
=7 */
#include<iostream>
using namespace std;
int duplicateNumber(int *arr, int size)
{
    //Write your code here
   for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[j];
            }
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
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cout << duplicateNumber(input, size) << endl;
	}
	return 0;
}