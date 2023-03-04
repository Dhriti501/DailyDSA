#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    vector<pair<char,int>> v;
    sort(s.begin(),s.end());
    int count =1;
    for(int i=0; i<s.length();i++){
      if (s[i] == s[i + 1]) {
        count++;
      }else{
          if(count>1)
            v.push_back(make_pair(s[i],count));
          count = 1;
      }


    }
    return v;
}