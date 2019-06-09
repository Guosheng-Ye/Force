/*************************************************************************
	> File Name: 4-5-11.cpp
	> Author: YeGuoSheng
	> Description:  Given an integer element a with n (n > 1), find the full permutation of all the elements in q
	> Created Time: Tue apr 02, 2019 21:50:08
 ************************************************************************/

#include<iostream>
using namespace std;

int n;
int arr[20];//Store arrays of permutations
int vis[20];
int num[20];//all number 
int count = 0;//Record the number of numeric elements in a

void dfs( int step)
{
	if(step > count)
	{
		for(int i = 1;i <= count; i++)
		{
			cout<<arr[i]<<" "; 
		}
		cout<<endl;
	}
	for(int i  = 0; i < count; i++)
	{
		if(vis[num[i]] == 0)
		{
			arr[step] = num[i];
			vis[num[i]] = 1;
			dfs(step +1);
			vis[num[i]] = 0;
		}
	}
}

void Solve(int x)
{
	int i = 0;
	while(x != 0)
	{
		num[i] = x  % 10;
		count ++;
		x /= 10;
		i++;
	}
}
int main()
{
	cin>>n;
	Solve(n);
	dfs(1);
	return 0;
}

