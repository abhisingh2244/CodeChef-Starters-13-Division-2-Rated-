#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p,x,y;
	    cin>>n>>p>>x>>y;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0,mount=0;
	    for(int i=1;i<=p;i++){
	        if(a[i]==0)
	        {
	            count+=x;
	        }
	        else
	        {
	            mount+=y;
	        }
	    }
	    cout<<count+mount<<endl;
	}
	return 0;
}
