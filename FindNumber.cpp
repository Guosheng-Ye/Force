/*************************************************************************
	> File Name: 4-5-7.cpp
	> Author: YeGuoSheng
	> Description:We have a three-digit number, the ones digit is bigger than the hundreds digit,
    the hundreds digit is bigger than the tens digit,
And the sum of your digits is equal to the product of your digits to get the three digits
	> Created Time: Tue, 02 apr 2019 19:39:53 
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{//a b  c
    for(int i = 100 ; i<= 999 ; ++i)
    {
        int a = i / 100;
        int b = (i - a*100)/10;
        int c = i % 10;
        if(c > a && a > b)
        {
            if(a + b+ c == a*b*c)
            {
                cout<<i<<" "<<a<<" "<<b<<" "<<c<<endl;
            }
        }
    }
    return 0;
}
