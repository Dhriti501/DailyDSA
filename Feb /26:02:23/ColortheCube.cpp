//USE FRICKING LONG LONGGGGGGGGGGGGGGGGGG

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;

	cin>>t;
	while(t--){
	    long long int n,x1,x2,x3,x4,x5,x6;
	    cin>>n>>x1>>x2>>x3>>x4>>x5>>x6;
	    
	    long long qty = ceil(n/2.0);
	    cout<<qty*(x1+x2+x3+x4+x5+x6)<<endl;
	    
	}
	
	return 0;
}
