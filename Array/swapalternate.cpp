/*
1
6
9 3 6 12 4 32
==3 9 12 6 32 4
*/
#include<iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i=0;i<size-1;i+=2)
    {
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
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
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}