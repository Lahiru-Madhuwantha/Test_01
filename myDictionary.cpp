#include<iostream>
#include<string>
#include<map> // #include <unordered_map>

using namespace std;

int main(){
  map<string,string> myDictionary;//<key,value>
  myDictionary.insert(pair<string,string>("apple","der Apfel")); 
  myDictionary.insert(pair<string,string>("banana","die Banane"));
  myDictionary.insert(pair<string,string>("cherry","die Kirsche, die Kirschen"));
  myDictionary.insert(pair<string,string>("orange","die Orange"));

  myDictionary["apple"] = "Der Apfel";
  cout << myDictionary.size() << endl;
  //myDictionary.erase("apple");
  myDictionary.clear();

  
  for(auto pair : myDictionary){ //for auto evry pair in myDictionary
    cout << pair.first << " -> " << pair.second << endl;

  }
}