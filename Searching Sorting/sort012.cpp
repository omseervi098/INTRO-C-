#include<bits/stdc++.h>
using namespace std;
void sort012(int *input, int n)
{
    int nzero=0;
    int ntwo=n-1;
    int current=0;
    while(current<=ntwo)
    {
        if(input[current]==0)
        {
            swap(input[current],input[nzero]);
            nzero++;
            current++;
        }else if(input[current]==2)
        {
            swap(input[current],input[ntwo]);
            ntwo--;
        }else
            current++;
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
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		sort012(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		delete[] arr;
		cout << endl;
	}
	return 0;
}
