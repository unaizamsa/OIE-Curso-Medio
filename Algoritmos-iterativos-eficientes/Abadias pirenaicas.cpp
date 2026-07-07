#include <iostream>
#include <vector>
using namespace std;

bool resuelve() {
    int N; cin >> N;
    if (N == 0) return false;
    
    vector<int> alturas(N);
    for (int & x : alturas) cin >> x;
    
    int abadias = 1;
    int maximo = alturas[N-1];
    
    for (int i = N-2; i >=0; --i) {
      if (alturas[i] > maximo) {
        ++abadias;
        maximo = alturas[i];
      }
    }
    
    cout << abadias << "\n";

    return true;
}

int main() {
  while (resuelve());
  return 0;
}




















