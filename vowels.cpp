#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    getline(cin, s);
   
    int n = s.size();
    int vowelCounts = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(s[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCounts = vowelCounts + 1;
        }
    }
    cout << vowelCounts << endl;
}
  
