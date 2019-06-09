/*************************************************************************
	> File Name: combination.cpp
	> Author: YeGuoSheng
	> Description:  
	> Created Time: 2019年03月27日 星期三 22时57分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
//F (n,k) => output a combination of arr when k==0
//F (n,k) I evaluated from k to n {arr[k-1] = I; F (I - 1, k - 1) when k > 0
//}}
//}
int n;
int k;
int arr[100] = { 0};

void Disp( ) 
{
    for(int i = 0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bfs(int n,int k)
{
    if(  k == 0)
    {
        Disp();
    }
    else
    {
        for(int i  = k; i<= n;i++)
        {
            arr[k - 1] = i;
            bfs(i-1,k-1);
        }
    }
}
int main()
{
    
    cout<<"Input the n and k"<<endl;
    cin>>n>>k;
    bfs(n,k);
    return 0;
}
