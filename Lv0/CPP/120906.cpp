#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;
    string strN = to_string(n);
    
    for(int i = 0; i < strN.size(); i++)
    {
        int nTmp = strN[i] - '0';
        answer += nTmp;
    }
    
    return answer;
}

/*
  // 다른 사람 풀이 중 좋았던 풀이
  int solution(int n) {
    int answer = 0;
    while(n > 0)
    {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}
*/
