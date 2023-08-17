#include <iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int x,y,z;
  cin >> x >> y >> z;

  string s;
  cin >> s;

  vector<int> numbers;
  numbers.push_back(x);
  numbers.push_back(y);
  numbers.push_back(z);
  sort(numbers.begin(), numbers.end());

  
  map<char,int> m;
  m['A'] = numbers[0];
  m['B'] = numbers[1];
  m['C'] = numbers[2];
  
  cout << m[s[0]] << " " << m[s[1]] << " " << m[s[2]] << endl;

    return 0;

}