/*************************************************************************
	> File Name: 4-5-6.cpp
	> Author: YeGuoSheng
	> Description :There was a group of chickens and rabbits with the same \
number of feet and a three-digit number of feet
The Numbers can only be 0,1,2,3,4,5
	> Created Time: Tue 02 apr 2019 20:48mins 37secs
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int d,e,f;
	for(a = 1; a <= 5; a++)
	{
		for(b = 0 ; b <= 5; b++)
		{
			for(c = 0; c <= 5; c++)
			{
				for(d = 1; d <= 5; d++)
				{
					for(e = 0 ; e <= 5; e ++)
					{
						for(f = 0; f <= 5 ;f++)
						{
							int x = a * 100 + b * 10 + c;
							int y = d * 100 + e * 10 + f;  
							if(a != b && a != c && a != d && a != e && a != f
							&& b != c && b != d && b != e && b != f 
							&& c != d && c != e && c != f 
							&& d != e && d != f 
							&& e != f
							&&  x % 2 == 0 && y % 4 == 0 && (x / 2 ==y / 4))//All Numbers don't repeat
								{
									cout<<"chicken: "<<x/2<<" rabbit: "<<y/4<<" chicken foot: "
									<<x<<" rabbit foot: "<<y<<endl;
								}

						}
					}
				}
			}
		}
	}
	return 0;
}
