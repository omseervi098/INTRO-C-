/*
Input:                           Output:
1                                 5
7
1 2 3 4 5 6 7 
12
*/
#include<iostream>
using namespace std;
int tripletSum(int *input, int size, int x)
{
    int count=0;
    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if( (input[i]+input[j]+input[k]==x))
                {
                    count++;
                }
            }
        }
    }return count;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		int x;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;
		cout << tripletSum(input, size, x) << endl;
		delete[] input;
	}
	return 0;
}