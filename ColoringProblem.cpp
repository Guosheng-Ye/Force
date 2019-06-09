/*************************************************************************
	> File Name: 4-5-10.cpp
	> Author: YeGuoSheng
	> Description:  So to solve the coloring problem, an n by n checkerboard, each of these squares is black or white,
	 and now I'm going to color it with red,
Find the largest area in a column with the same color to paint, calculate the maximum number of painted checkers
	> Created Time: Tue apr 02, 2019 21:24.28 
 ************************************************************************/

/*Solution: enumerate each column, traverse each row, statistics the largest same area, each time to find a larger area, update the largest area
*/
#include<iostream>
using namespace std;
#define MAX 50 
char arr[MAX][MAX] ;
int n;
int maxquarenum = 0;
int maxcount = 1;
void Solve(char arr[MAX][MAX],int n)
{
	
	for(int j = 0;j < n ;++j)
	{
		int count = 1;
		char start = arr[0][j];//record the fisrt block
		for(int i = 1; i < n;++i)//traverse
		{
			if(arr[i][j] == start)
			{
				count ++;
				if(count > maxcount)
				{
					maxcount = count;//update
				}
			}
			else
			{
				start = arr[i][j];//rebegin
			}
			
		}
	}
}

int main()
{
	cin>>n;
	for(int i = 0;i < n ;++i)
	{
		for(int j = 0; j < n; ++j)
		{
			cin>>arr[i][j];
		}
	}
	Solve(arr,n);
	cout<<maxcount<<endl;
	return 0;
}


