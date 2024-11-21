#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Vehicle{
    public:
    virtual double FuelEff(string name, double fuel, double mi)=0;
};

class Car : public Vehicle{
    public:
    double FuelEff(string name, double fuel, double mi) override{
        return (mi/(fuel*1.1)); 
    }
};
class Motorcycle : public Vehicle{
    public:
    double FuelEff(string name, double fuel, double mi) override{
        return (mi/(fuel*0.9));
    }
};
class Truck : public Vehicle{
    public:
    double FuelEff(string name, double fuel, double mi) override{
        return (mi/(fuel*0.8)); 
    }
};

int main(){
    int choice;
    string Type;
    double FuelCap;
    double mileage;
    cout<<"Enter the choice: "<<endl;
    cin>>choice;
    Car C;
    Motorcycle M;
    Truck T;
    cin>> Type;
    cin>> FuelCap;
    cin>> mileage;
    if(choice==1){
        cout<<fixed<<setprecision(2)<<"Fuel Efficiency: "<<C.FuelEff(Type, FuelCap, mileage)<<" miles per gallon"<<endl;
    }
    else if(choice==2){
        cout<<fixed<<setprecision(2)<<"Fuel Efficiency: "<<M.FuelEff(Type, FuelCap,mileage)<<" miles per gallon"<<endl;
    }
    else if(choice==3){
        cout<<fixed<<setprecision(2)<<"Fuel Efficiency: "<<T.FuelEff(Type, FuelCap,mileage)<<" miles per gallon"<<endl;
    }
}