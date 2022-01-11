/*
Input:1               Output:
5                      1 2 3 4 4 6 7 11 13
1 3 4 7 11
4
2 4 6 13
*/
#include <iostream>
using namespace std;
void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here    
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            ans[i+j]=arr1[i];
            i++;
        }else
        {
            ans[i+j]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        ans[i+j]=arr1[i];
        i++;
    }while(j<size2)
    {
        ans[i+j]=arr2[j];
        j++;
    }
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int size1;
		cin >> size1;
		int *arr1 = new int[size1];
		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}
		int size2;
		cin >> size2;
		int *arr2 = new int[size2];
		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}
		int *ans = new int[size1 + size2];
		merge(arr1, size1, arr2, size2, ans);
		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}