#include <string>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = my_string;
    
    char ch1 = answer[num1];
    char ch2 = answer[num2];
    
    answer[num1] = ch2;
    answer[num2] = ch1;
    
    return answer;
}
