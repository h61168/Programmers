#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer{};
    int nSidesSum{};
    int nMaxSide{};
    
    nMaxSide = sides[0];
    for(int i = 0; i < sides.size(); i++)
    {
        nSidesSum += sides[i];
        if(nMaxSide < sides[i])
            nMaxSide = sides[i];
    }
    nSidesSum -= nMaxSide;
    
    if(nMaxSide < nSidesSum)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}
