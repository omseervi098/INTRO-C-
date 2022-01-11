/*
Input: 2-no. of testcase
       9
       3
output: 1 3 5 7 9 8 6 4 2
        1 3 2
*/
#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int i=0,j=n-1;
    int cnt=1;
    while(i<=j)
    {
        if(cnt%2==1)
        {
            arr[i]=cnt;
            cnt++;
            i++;
        }else{
            arr[j]=cnt;
            cnt++;
            j--;
        }
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}