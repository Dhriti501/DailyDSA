// https://www.codechef.com/problems/EVALMAS
// Difficulty Rating:1354

#include <iostream>

using namespace std;

int main() {
	// your code goes here 
	int n,x,y;
	
	cin>>n;
	while(n--){
	    cin>>x>>y;
	    string ans ="";
	    int cur=1;
	    while(x--){
	       if(cur<y){
	           ans += "+";
	           cur+=1;
	       }else if(cur==y){
	           ans += "*";
	           cur*=1;
	       }else{
	           ans += "-";
	           cur-=1;
	       }  
	    }
	    if(cur == y){
           cout<<ans<<endl;
       }else{
           cout<<"-1"<<endl;
       }
	    
	        
	    
	}
	return 0;
}
