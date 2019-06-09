/*************************************************************************
	> File Name: 4-5-5.cpp
	> Author: YeGuoSheng
	> Description: 1!+2!+3!+...+n! 
	> Created Time: Tue, 02 apr 2019 19:36:06 
 ************************************************************************/


#include<iostream>                                                                                                  
using namespace std;

int  Solve(int x)
{
    if(x == 1)
    {
       return x;
    }
    else
      return x * Solve(x-1);
}

int main()
{
    int n;
    cin>>n;
    int ans  = 0;
    for(int i = 1;i <= n ; i++)
    {
        ans += Solve(i);
    }
    cout<<ans<<endl;
    return 0;
}
                   
