/*************************************************************************
	> File Name: 4-7-2.cpp
	> Author: YeGuoSheng
	> Description:  
A positive sum greater than 1 becomes a complete number if the sum of all
 factors equals itself, as in 6, 28. 6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 14
This problem determines the perfect number in the interval
	Sample
	Input :
	2
	2 5
	5 7
	OutPut:
	0
	1
	> Created Time: Monday, April 08, 2019 21:32.58
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int n;
int num1;
int num2;

void Solve(int x1,int x2)
{
	int i;
	int j;	
	int count = 0;
	for( i = x1;i <= x2; i++)
	{
	
		int  t = i;
		for(j = 1; j <= i /2;j ++)
		{
			if(i % j == 0)
			{
				t += j;
			}
		}
		if(t == i * 2)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
int main()
{
	while(cin>>n && n != 0)
	{
		while(n--)
		{
			cin>>num1>>num2;
			Solve(num1,num2);
		}
	}
    return 0;
}
