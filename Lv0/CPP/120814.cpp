using namespace std;

int solution(int n) {
    int answer = 0;
    int nRemainder = n % 7;
    
    if(nRemainder == 0)
        answer = n / 7;
    else
        answer = (n / 7) + 1;
    
    return answer;
}
