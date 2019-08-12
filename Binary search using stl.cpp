#include <iostream>
#include<algorithm>
using namespace std;

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
	if(binary_search(a,a+n,s))
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}
