#include<iostream>
using namespace std;
float area(int r);
float area(int b,  int h);
float area(float l, float w);
int main(){
    int r = 5;
    int b = 10, h = 5;
    float l = 4, w = 5;
    cout<<area(r)<<endl;
    cout<<area(b,h)<<endl;
    cout<<area(l,w)<<endl;
    return 0;
}
float area(int r){
    return 3.14*r*r;
}
float area(int b, int h){
    return 0.5*b*h;
}
float area(float l, float w){
    return l*w;
}