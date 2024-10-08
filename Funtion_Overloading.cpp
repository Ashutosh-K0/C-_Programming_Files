#include<iostream>
using namespace std;
void display(int a, int b, int c);
void display(string name, string city, string state);
void dispaly(float a, float b, float c);

void display(int a, int b, int c){
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<"Values of numbers are : "<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;;
    return;
}
void display(string name,string city, string state){
    cout<<"Enter the Name: "<<endl;
    cin>>name;
    cout<<"Enter the city: "<<endl;
    cin>>city;
    cout<<"Enter the State: "<<endl;
    cin>>state;
    cout<<"The Details are: "<<endl;
    cout<<name<<endl;
    cout<<city<<endl;
    cout<<state<<endl;
    return;
}
void display(float x, float y, float z){
    cout<<"Enter the values of the numbers: "<<endl;
    cin>>x>>y>>z;
    cout<<"The values are: "<<endl;
    cout<<x<<" "<<y<<" "<<z;
    return;
}
int main(){
    int a,b,c;
    string name,city,state;
    float x,y,z;
    display(a,b,c);
    display(name,city,state);
    display(x,y,z);
    return 0;
}