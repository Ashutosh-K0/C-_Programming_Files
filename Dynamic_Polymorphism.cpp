#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Popul{
    virtual int calcRate(int initial, int final) = 0;
};

class Birth : public Popul{
    public:
    int calcRate(int initial, int final) override{
        return (1000*(final - initial)/initial);
    }
};

int main(){
    int N;
    int P;
    Birth B;
    cin>> N >>P;
    cout<<fixed << setprecision(2) << B.calcRate(N,P)<<endl;
    return 0;
}