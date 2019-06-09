/*************************************************************************
	> File Name: 4-6-3.cpp
	> Author: YeGuoSheng
	> Description: Given a panel containing 'X' and 'O', 
	capture all the areas surrounded by 'X' and invert all the 'O' in that area to 'X',
	X X X X
	X O O X
	X X O X 
	X O X X 
---------------
	X X X X
	X X X X
	X X X X
	X O X X  
	> Created Time: Saturday, April 06, 2019 11:00:04 
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

vector<vector<char> > board;

int H[4] = {0,1,0,-1};
int V[4] = {-1,0,1,0};

#define MAXM 10000
int n ;
char arr[MAXM][MAXM];

void Disp()
{
	int m = board.size();
	int n =board[0].size();
	for(int i = 0 ; i< m;i++)
	{
		cout<<" ";
		for(int j = 0; j < n;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

void dfs(int i,int j)
{
	board[i][j] = '*';
	int ni;
	int nj;
	for(int k = 0 ;k < 4; k++)
	{
		ni = i + H[k];
		nj = j + V[k];
		if(ni >= 0 && ni < n && nj >= 0 && nj < n && board[ni][nj] == 'O')
		{
			board[ni][nj] = '*';
			dfs(ni,nj);
		}
	}
}
void Solve()
{
	int i;
	int j;
	if(board.empty() || board[0].empty())
	{
		return ;
	}
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < n;j++)
		{
			if(board[i][j] == 'O')
			{
				if(i == 0 || i ==n -1 || j == 0|| j == n-1 )//find the edge O
				{
					dfs(i,j);
				}
			}
		}
	}
	for(i = 0; i < n;i++)
	{
		for(j = 0 ; j < n;j ++)
		{
			if(board[i][j] == 'O')
			{
				board[i][j] = 'X';
			}
			else if(board[i][j] == '*')
			{
				board[i][j] = 'O';
			}
			
		}
	}
}

int main()
{
	cin>>n;
	for(int i = 0 ;i < n;i ++)
	{
		vector<char>s;
		for(int j = 0;  j < n ;j++)
		{
			cin>>arr[i][j];
			s.push_back(arr[i][j]);
		}
		board.push_back(s);
	}
	cout<<"Before board:"<<endl;
	Disp();
	Solve();
	cout<<"After board:"<<endl;
	Disp();
    return 0;
}
