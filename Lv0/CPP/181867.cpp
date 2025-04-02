#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int nCount{};
    
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'x')
        {
            answer.push_back(nCount);
            nCount = 0;
        }
        else
            nCount++;
    }
    
    answer.push_back(nCount);
    
    return answer;
}
