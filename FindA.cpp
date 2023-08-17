#include <string>
#include <iostream>

using namespace std;

int main(){
  string s;
  cin >> s;

  size_t position_a = s.find('a');

  string suffix = s.substr(position_a);
  cout << suffix << endl;
}