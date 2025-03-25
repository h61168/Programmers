#include <vector>

using namespace std;

int gcd(int n1, int n2)
{
    if(n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int nGCD = gcd(n, m);
    int nLCM = n * m / nGCD;
    
    answer.push_back(nGCD);
    answer.push_back(nLCM);
    
    return answer;
}
