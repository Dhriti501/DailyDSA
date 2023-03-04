#include <iostream>
using namespace std;

int main(){
  string s;
  string t;
  cout<<"Enter string s: ";
  cin>>s;
  cout<<"Enter string t: ";
  cin>>t;
  // cout<<s<<endl;
  if(s.find(t) != string::npos )
    cout<<"Found";
  else  
    cout<<"not found";
  // cout<<ans;

return 0;
}