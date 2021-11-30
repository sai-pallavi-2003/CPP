#include<iostream>
using namespace std;
int area(long a){
    int ar=a*a;
    cout<<ar<<endl;
    return 0;
}
long area(float l,float b){
    float ar=l*b;
    cout<<ar<<endl;
    return 0;
}
float area(int r){
    float ar=3.14*r*r;
    cout<<ar<<endl;
    return 0;
}
int main(){
    long a,l,b;
    int r,ch;
    cout<<"give the side of cube, length and breadth of rectangle and radius of circle";
    cin>>a>>l>>b>>r;
    cout<<"enter the choice";
    cin>>ch;
    switch(ch){
        case 1:
        area(a);
        break;
        case 2:
        area(l,b);
        break;
        case 3:
        area(r);
        break;
    }
    return 0;
}
