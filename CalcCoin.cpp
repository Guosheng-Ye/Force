/*************************************************************************
	> File Name: 4-6-2.cpp
	> Author: YeGuoSheng
	> Description:There are COINS 1 cent, 2 cent, 5 cent, and n (n>=5)
	> Created Time: Saturday, April 06, 2019 19:57:10
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
int ans ;

void Solve(int n)
{
	for(int i = 0 ; i <= n/5;i++)
	{
		int  t = n;
		t -= 5 * i;//5
		for(int j = 0 ;j <= n /2 ; j++)
		{
			t -= 2 * j;//2
			{
				for(int z = 1;z <= n; z++)//1
				{
					if(i * 5 + j * 2 + z == n)
					{
						ans ++;
						cout<<"5 poin: "<<i<<" 2 poin: "<<j<<" 1 poin:"<<z<<endl;
					}
				}
			}
		}
	}	
	cout<<"Total :"<< ans <<" methods"<<endl;
}

int main()
{
	while(cin>>n && n !=0)
	{
		Solve(n);
	}
    return 0;
}
