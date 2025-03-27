#include <string>

using namespace std;

int solution(string t, string p) {
    int answer{};
    
    for(int i = 0; i < t.size(); i++)
    {
        string strSub = t.substr(i, p.size());
        int nLength = strSub.size();
        unsigned long ulStringToInt = stoul(strSub);
        unsigned long ulP = stoul(p);
        
        if(nLength == p.size() && ulStringToInt <= ulP)
            answer++;
    }
    
    return answer;
}
