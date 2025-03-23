// for문으로는 이미 해봐서 while문으로 풀어봤다.
#include <iostream>

using namespace std;

int main(void) {
    int n{};
    int nLine{};
    int nStar{};
    
    cin >> n;
    
    while(nLine < n)
    {
        nStar = nLine;
        while(nStar >= 0)
        {
            cout << "*";
            nStar--;
        }
        cout << "\n";
        nLine++;
    }
    
    return 0;
}

/*
  // for문
  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j <= i; j++)
      {
          cout << "*";
      }
      cout << "\n";
  }
*/
