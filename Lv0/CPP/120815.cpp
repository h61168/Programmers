using namespace std;

int solution(int n) {
    int answer{};
    int nPizza{};
    int nPiece{};
    
    nPizza = 1;
    nPiece = 1;
    
    if(nPiece % n == 0)
        answer = nPizza;
    else
    {
        while(nPiece % n != 0)
        {
            nPiece = 6 * nPizza;
            nPizza++;
        }
        answer = nPizza - 1;
    }
    
    return answer;
}
