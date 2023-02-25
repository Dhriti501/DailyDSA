// https://www.codechef.com/problems/NAME2
// Difficulty Rating:1285

#include <bits/stdc++.h>
using namespace std;


bool f1(string s1, string s2){
        int i=0,j=0;
	    int sz1 = s1.length();
	    int sz2 = s2.length();
	    
	    while(i<sz1 && j<sz2){
	        if(s1[i] == s2[j]){
	           ++i;++j;
	        }else
	            j++;
	    }
	    return (i==sz1);
}

int main() {
	int t;
	
	string m,w;
	cin>>t;
	while(t--){
	    cin>>m>>w;
	    bool ans = ((m.length()<w.length()) ? f1(m,w) : f1(w,m));
	    ans ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	}
	return 0;
}
