/*************************************************************************
	> File Name: 4-5-4.cpp
	> Author: YeGuoSheng
	> Description: <(3,1,4,5,2) => <3,1> <3,2> <4,2><5,2>  
	> Created Time: Tue, 02 apr 2019 19:33:00
 ************************************************************************/
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int n;
multimap<int,int >ma1;
multimap<int,int >::iterator it;
int main()
{
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; ++i)
    {
        cin>>arr[i];
    }
    for(int i = 0 ;i < n-1 ;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(arr[i] > arr[j])
            {
                ma1.insert(pair<int,int>(arr[i],arr[j]));
            }
        }
    }
    for(it = ma1.begin();it != ma1.end();it++)
    {
        cout<<"["<<it->first<<","<<it->second<<"]"<<endl;
    }
    return 0;
}



