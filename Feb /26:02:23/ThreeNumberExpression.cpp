//TAKE LONG LONG FOR BIG VALUES!!!!!!

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long a,b,c;
	int sum;
	cin>>t;
	while(t--){
        cin>>a>>b>>c;
        if(a==b && b==c)
            cout<<"NO"<<endl;
        else if(a+b == c)
            cout<<"YES"<<endl;
        else if(b+c == a)


            cout<<"YES"<<endl;
        else if(a+c == b)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
	 }
	
	return 0;
}
