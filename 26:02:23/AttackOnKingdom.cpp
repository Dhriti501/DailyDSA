//codechef - concept - priority queue


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,ans;
	cin>>t;
	priority_queue<int> pq;
// 	priority_queue<int, vector<int>, greater<int> > pq;
	while(t--){
	    pq = priority_queue <int>();
	   //pq = priority_queue<int, vector<int>, greater<int> >;
	    cin>>n;
	    while(n--){
	        cin>>x;
	        pq.push(x);
	    }
	    while(pq.size() >2)
	        pq.pop();
	   
	    cout<<pq.top()<<endl;
	    
	}
	return 0;
}
