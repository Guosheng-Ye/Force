/*************************************************************************
	> File Name: 4-5-9.cpp
	> Author: YeGuoSheng
	> Description: 493775 = 3 * 5 * 5 * 65837  ; 3+5+5+6+5+8+3+7 = 42;
	4+9+3+7+7+7+5 = 42  so=>493775 is Simth num

	All even Numbers greater than 2 are composite.
Of all the odd Numbers greater than 5, the ones digit is 5.
All natural Numbers whose ones digit is 0, except 0, are composite Numbers.
All 4, 6, and 8 ones are composite Numbers.
The smallest (even) composite number is 4, and the smallest odd composite number is 9.
Each composite number can be written in a unique form as a product of prime Numbers, the factorization of prime factors. (fundamental theorem of arithmetic)
For any composite number greater than 5 (Wilson's theorem):
	> Created Time: Tue apr 02, 2019 19:54:35
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#include<vector>

int N;

int SumOfEachNum(int x)//Sum of each num
{
	int ans = 0;
	while(x != 0)
	{
		ans += x % 10;
		x /= 10;
	}
	return ans;
}


bool Solve(int N)
{
	int sumOfEachNum = SumOfEachNum(N);
	int sumOfEachPrimeNum = 0;
	int x = N;
	vector<int>v1;
	vector<int>::iterator it;
	for(int i = 2;x != 1;i++ )
	{
		if(x % i == 0)
		{
			v1.push_back(i);
			x /= i;
			i--; 
		}
	}
	for(it = v1.begin() ;it != v1.end();it ++)
	{
		sumOfEachPrimeNum +=SumOfEachNum(*it);
	}
	if (sumOfEachNum == sumOfEachPrimeNum )
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	while(cin>>N && N != 0)
	{
		while(true)
		{
			/* code */
			while(!Solve(N))
			{
				N++;
			}
			cout<<N<<endl;
			break;
		}
	}
	return 0; 
}

