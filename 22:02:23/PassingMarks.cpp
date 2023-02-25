// https://www.codechef.com/problems/CUTOFF
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,a;
	int ind;
	vector<int> v ;
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    v.clear();
	    
	    for(int i=0;i<x;i++){
	        cin>>a;
	        v.push_back(a);
	    }
	    sort(v.begin(),v.end());
	    
        ind = (x - y);
        cout<<v[ind]-1<<endl;
	    
         
	}
	    
	return 0;
}
