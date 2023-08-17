#include <iostream>
#include <map>

using namespace std;

int main(){
  int n=0;
  
  while(n!=-1){
    cin >> n;
    map<int,int> m;

    for(int i = 0; i < n; i++){
      int time;
      int speed;
      cin >> time >> speed;
      m[speed] = time;
    }

    int pretime = 0;
    int distance = 0;

    for(auto it = m.rbegin(); it != m.rend(); it++){
      int speed = it->first;
      int time = it->second;
      distance += speed * (time - pretime);
      pretime = time;
    }

    if(n!=-1){
      cout << distance << " miles" << endl;
    }
  }
}
