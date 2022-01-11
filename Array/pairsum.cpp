/* 
1
9
1 3 6 2 5 4 3 2 4  
7
7- total no. of pairs
*/
#include <iostream>
using namespace std;
int pairSum(int *input, int size, int x)
{
	//Write your code here
    int i=0,j=1,count=0;
    while(i<size-1)
    {
        j=i+1;
        while(j<size)
        {
                if(input[i]+input[j]==x)
                {
                    count++;
                }
            
            j++;
        }
        i++;
    }
    return count;
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

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}