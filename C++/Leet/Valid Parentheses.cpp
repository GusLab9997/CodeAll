#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
  public:
      string s
       DaTa(string S):s(S){};
       bool isValid(){
        stack<char> stack;
        
        for(char &c : s){
          switch(c){
            case '(':
            case '[':
            case '{':
              stack.push(c);
              break;
          }
        }
       }
      }

int main(){
    return 0;
}