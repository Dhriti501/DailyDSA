// check if string2 contains a shuffled form of string 1
//1. Input: str1 = “onetwofour”, str2 = “hellofourtwooneworld” 
    // Output: YES 
    // Explanation: str1 is substring in shuffled form of str2 as 
    // str2 = “hello” + “fourtwoone” + “world” 
    // str2 = “hello” + str1 + “world”, where str1 = “fourtwoone” (shuffled form) 
    // Hence, str1 is a substring of str2 in shuffled form.
//2.   Input: str1 = “roseyellow”, str2 = “yellow” 
    // Output: NO 
    // Explanation: As the length of str1 is greater than str2. Hence, str1 is not a substring of str2.

#include <iostream>
using namespace std;

int main(){
  string s1, s2;
  cin>>s1>>s2;
  if(s1.length() > s2.length()){
    cout<<"As the length of str1 is greater than str2. Hence, str1 is not a substring of str2";
  }else{
    
  }
return 0;
}