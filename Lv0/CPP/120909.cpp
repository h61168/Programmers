using namespace std;

int solution(int n) {
    int nNum = 0;
    
    while(nNum <= n && nNum * nNum != n)
        nNum++;
    
    if(n % nNum == 0)
        return 1;
    
    return 2;
}
