/*******************************************************
 String J stores the types of jewels and S is the stones 
 you have. You want to know how many of the stones you 
 have are also jewels.
 The letters in J are distince and case sensitive.

 Idea 1: direct search.
********************************************************/

#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
  int numJewelsInStones(string _J, string _S) {
    string::size_type count = 0;
    for(auto cJ : _J) {
      for(auto cS : _S) {
	if(cS == cJ)
	  count += 1;
      }
    }
    return count;
  }
};


int main() {

  string S, J;
  cout << "Please input the J\n";
  cin >> J;
  cout << "Please input the S\n";
  cin >> S;
  Solution sol;
  auto num = sol.numJewelsInStones(J, S);
  cout << "There are " << num << " jewels in stone\n";
  
  return 0;
}
