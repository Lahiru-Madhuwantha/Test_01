#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    v.push_back(num);
  }

  vector <int> miss;
  int expect = 1;

  for(int num: v){
    while(expect < num){
      miss.push_back(expect);
      expect++;
    }
    expect = num + 1;
  }

  if(miss.empty()){
    cout << "good job" << endl;
    }
    else{
      for(int num: miss){
        cout << num << endl;
      }
    }
}