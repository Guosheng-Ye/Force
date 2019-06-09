/*************************************************************************
	> File Name: 4-7-3.cpp
	> Author: YeGuoSheng
	> Description:  
	There is a fish tank containing n fish of fishSize[I](1<= I <=n, all positive integers)
But there is a law of big fish eating small fish
A is the size of B [2 ~ 10] times, A will eat B, so put in the fish to consider the following circumstances
(1) fish put in are safe (2) fish put in don't eat other fish (3) fish in the tank don't eat each other
Now you need to know the size range of the fish [minSize, maxSize].
Input description: (3) line 1: size range of fish put in [minSize,maxSize] (1<=minSize,maxSize<=1000)
Line 2: the number of fish in the tank n (1<=n<= 50). FishSize [I] (1<=fishSize<=1000) '
	Sample:
	1 12
	1 
	1
	Output:
	3
	> Created Time: Monday, April 08, 2019 21:57:25
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

#define MAXN 100000
int n;//Number of existing fish (1<=n<= 50)

int vis[MAXN];
int ans;
int minSize;
int maxSize;//New fish size range (1<=minSize,maxSize<=1000)

vector<int> ExistFishSize;//The size of existing fish
vector<int>::iterator it;//if(i >= 2 * *it && i <=10* *it || ( *it >=2 * i && *it <= 1 * i))

void Print()
{
	cout<<"Fish size are: "<<endl;
	for(it = ExistFishSize.begin();it != ExistFishSize.end();it++)
	{
		cout<<*it<<" ";
	}
}

bool Judge(vector<int> &ExistFishSize,int x)
{
	for(it = ExistFishSize.begin();it != ExistFishSize.end();it++)
	{
		if(   (x >= 2 * (*it)) && (x <= 10* (* it)) || (((*it) >=2 * x) && ((*it) <= 10 * x)) )
		{
			return false;
		}
	}
	return true;
}

void Solve()
{
	for(int i = minSize ; i <= maxSize; i++)
	{
		if(Judge(ExistFishSize,i))
		{
			ExistFishSize.push_back(i);
			ans++;
		}
	}
	Print();
}
int main()
{
	cin>>minSize>>maxSize;
	cin>>n;
	int x;
	while(n--)
	{
		cin>>x;
		ExistFishSize.push_back(x);
	}
	Solve();
	cout<<endl;
	cout<<ans<<endl;
	return 0;
}
