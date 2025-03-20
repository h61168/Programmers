#include <vector>

using namespace std;

// 최대 공약수를 찾기 위해 재귀함수를 이용
int gcd(int n1, int n2)
{
    // (n1 % n2) == 0 이면 n1을 return
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, (n1 % n2));
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
  
    int nLCM = denom1 * denom2 / gcd(denom1, denom2);                  // 최소 공배수(Least Common Multiple) 구하기
    int nNumer = numer1 * (nLCM / denom1) + numer2 * (nLCM / denom2);  // 최소 공배수를 곱한 분자 구하기
    int nGCD = gcd(nNumer, nLCM);                                      // 기약 분수 계산을 위한 최대 공약수 구하기
    int nResultDenom = nLCM / nGCD;                                    // 기약 분수 계산이 된 분모 구하기
    int nResultNumer = nNumer / nGCD;                                  // 기약 분수 계산이 된 분자 구하기
    
    answer.push_back(nResultNumer);
    answer.push_back(nResultDenom);
    
    return answer;
}

/*
  TestCase 1) numer1 : 1, denom1 : 2, number2 : 3, denom2 : 4, result : [5, 4]
  18 : nLCM = 2 * 4 / 2                      => 4
  19 : nNumer = 1 * (4 / 2) + 3 * (4 / 4)    => 5
  20 : nGCD = 1
  21 : nResultDenom = 4 / 1;                 => 4
  22 : nResultNumer = 5 / 1;                 => 5
*/

/*
  TestCase 2) numer1 : 9, denom1 : 2, number2 : 1, denom2 : 3, result : [29, 6]
  18 : nLCM = 2 * 3 / 1                      => 6
  19 : nNumer = 9 * (6 / 2) + 1 * (6 / 3)    => 29
  20 : nGCD = 1
  21 : nResultDenom = 6 / 1;                 => 6
  22 : nResultNumer = 29 / 1;                => 29
*/

/*
  TestCase 3) numer1 : 4, denom1 : 8, number2 : 8, denom2 : 16, result : [1, 1]
  18 : nLCM = 8 * 16 / 8                     => 16
  19 : nNumer = 4 * (16 / 8) + 8 * (16 / 16) => 16
  20 : nGCD = 16
  21 : nResultDenom = 16 / 16;               => 1
  22 : nResultNumer = 16 / 16;               => 1
*/
