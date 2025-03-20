int solution(int slice, int n) {
    int answer{};
    int nRemainder{};
    
    nRemainder = n % slice;
    
    if(nRemainder != 0)
        answer = (n / slice) + 1;
    else
        answer = n / slice;
    
    return answer;
}
