#include <iostream>
using namespace std;

//M candidates take part in the elections
// On the day of the vote, N voters voiced their votes. Find out how many votes each candidate received.

// Reformulation: A string with N elements is given. Find out how many times each element appears from 1 to M in the given string.
// Versiunea 1

int main() {
  int N, M, v[1001];
  cin>>N>>M;

  for (int i = 1; i <= N; ++i)
      cin>>v[i];

  int nr;// the number of occurrences of each item
  for (int i = 1; i <= M; ++i) {
    nr = 0;
    for (int j = 1; j <= N; ++j) 
      if(i == v[j])
        ++nr;
    cout<<"Elementul "<<i<<" apare de "<<nr<<" ori\n";
  }
  return 0;
}
