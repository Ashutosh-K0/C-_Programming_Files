#include<iostream>
#include<iomanip>
using namespace std;

class HealthInsurance{
    public:
    void ClaimAmt(double amt){
        double d_amt = amt, f_amt;
        if(amt > 10000){ 
            d_amt = amt - (amt * 0.05);
        } else if(amt > 5000){
            d_amt = amt - (amt * 0.03);
        }
        f_amt = d_amt * 0.8;
        cout << fixed << setprecision(2) << "Claim Amount: " << f_amt << endl;
    }
};

class VehicleInsurance{
    public:
    void ClaimAmt(double amt){
        double d_amt = amt, f_amt;
        if(amt > 10000){ 
            d_amt = amt - (amt * 0.05);
        } else if(amt > 5000){
            d_amt = amt - (amt * 0.03);
        }
        f_amt = d_amt * 0.7; 
        cout << fixed << setprecision(2) << "Claim Amount: " << f_amt << endl;
    }
};

class PropertyInsurance{
    public:
    void ClaimAmt(double amt){
        double d_amt = amt, f_amt;
        if(amt > 10000){
            d_amt = amt - (amt * 0.05);
        } else if(amt > 5000){
            d_amt = amt - (amt * 0.03);
        }
        f_amt = d_amt * 0.9; 
        cout << fixed << setprecision(2) << "Claim Amount: " << f_amt << endl;
    }
};

int main(){
    double amt;
    int ch;
    cin >> amt;
    cin >> ch;

    HealthInsurance H;
    VehicleInsurance V;
    PropertyInsurance P;

    if(ch == 1){
        H.ClaimAmt(amt); 
    } else if(ch == 2){
        V.ClaimAmt(amt); 
    } else if(ch == 3){
        P.ClaimAmt(amt);
    } else {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}
