#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=1;i<s.size();i++)
	    {
	        if(s[i]=='1'&& s[i-1]=='0' ||  s[i]=='0'&& s[i-1]=='1' )
	        ans++;
	    }
	    if(s[0]=='0'){
	        cout<<ans+1<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
