#include <iostream>
#include<algorithm>
using namespace std;

int bin(int a[],int l,int r,int x)
{
 
    if(r>=l)
    {
        int m=l+(r-l)/2;
        if(a[m]==x)
        return m;
        else
        {
            if(x<a[m])
           return bin(a,l,m-1,x);
            else
            return bin(a,m+1,r,x);
        }
    }
    return -1;
}
int main() {
	int n=8;
	int a[n]={2,8,12,34,1,3,0,10};
	int s;
	cin>>s;
	sort(a,a+n);
	cout<<"after sortig"<<endl;
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
	
	cout<<endl;
	cout<<bin(a,0,n-1,s)+1;
	

	return 0;
}
