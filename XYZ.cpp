/*************************************************************************
	> File Name: 4-7-1.cpp
	> Author: YeGuoSheng
	> Description:  
	There's a cubic equation of one variable a * x^3 + b * x^ 2+ c * x + d = 0;
All coefficients are given and three different real roots of the equation are specified (-100 ~ 100).
The absolute value of the difference between root and root >= 1
	Sample:
	Input: 1 -5 -4 20
	Output:-2.00 2.00 5.00
	> Created Time: Monday, April 08, 2019 21:19:55
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

double a,b,c,d;

void Solve()
{
	double x;
	for(int  i = -10000;i <= 10000;i++)
	{
		x = i / 100.0;
		double fx = a * x* x * x +  b * x * x + c * x + d;
		if(fx >-0.0001 && fx < 0.00001)
		{
			printf("%6.2f",x);
		}
	}
	cout<<endl;
}

int main()
{
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	Solve();
    return 0;
}
