//Lam Kai I

enum WorkState{
    ERR, SUCCESS, DONE
};

struct State{
    enum WorkState workState;
    int n;
    float* p;
};

float calAvg(int sum){
    return sum/10.0;
}