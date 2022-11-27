#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int t, n;
  cin >> t;
  

  while (t--) {
    long long int aux1 = 0, aux2 = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
      int aux;
      cin >> aux;
      if(aux >= 0){
       aux1+=aux;
      }else{
       aux2+=aux; 
      }
    }

    cout << abs(abs(aux1) - abs(aux2)) << endl;
  }
  
  return 0;
}
