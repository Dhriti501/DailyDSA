// https://www.codechef.com/problems/COINS?tab=statement

#include <iostream>
using namespace std;

long solve(long n){
    if(n>=12)
        return solve(n/2)+solve(n/3)+solve(n/4);
    else
        return n;
}

int main() {
	// your code goes here
	long n;
	while(cin>>n)
	    cout<<solve(n)<<endl;
	return 0;
}
