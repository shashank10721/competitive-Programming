#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int u=temp%10;
    temp/=10;
    int ten=temp%10;
    int a[5]={0};
    if(ten<5)
    {
        for(int i=0;i<ten;i++)
        a[i]=1;
    }
    else
    {
        a[4]=1;
        for(int i=0;i<ten-5;i++)
        a[i]=1;
    }
    //unit digit for
    int b[5]={0};
    if(u<5)
    {
        for(int i=5-u;i<5;i++)
        b[i]=1;
    }
    else 
    {
        b[0]=1;
        int t1=u-5;
        int t2=5-t1;
        for(int i=t2;i<5;i++)
        b[i]=1;
    }
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    
    cout<<endl;    
    for(int i=0;i<5;i++)
        cout<<b[i]<<" ";    
    
    
    return 0;
}
