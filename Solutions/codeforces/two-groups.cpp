#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t, n;
  vector<int> v1, s1, s2;
  cin >> t;
  

  while (t--) {
    
cin >> n;
    for (int i = 0; i < n; i++) {
      int aux;
      cin >> aux;
      v1.push_back(aux);
    }

    for (int i = 0; i < n; i++) {
      if (v1[i] >= 0)
        s1.push_back(v1[i]);
      else
        s2.push_back(v1[i]);
    }
    long long int aux1 = 0, aux2 = 0;

    for (int i = 0; i < s1.size(); i++)
      aux1 += s1[i];

    for (int i = 0; i < s2.size(); i++)
      aux2 += s2[i];

    cout << abs(abs(aux1) - abs(aux2)) << endl;
    v1.clear();
    s2.clear();
    s1.clear();
  }
  
  return 0;
}