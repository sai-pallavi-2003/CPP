#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void set(int n1, int n2){
        a = n1;
        b = n2;
    }
    void display(){
        cout<<"Your number is: "<<a<<" + "<<" i "<<b<<"\n";
    }
    
    friend Complex add(Complex c1, Complex c2);
};
Complex add(Complex c1, Complex c2){
    Complex c3;
    c3.a = c1.a+ c2.a;
    c3.b = c1.b+ c2.b;
    cout<<"the sum is: "<<c3.a<<"+"<<"i"<<c3.b<<"\n";
    return c3;
}
int main(){
    Complex s1,s2,s3;
    int ina,inb,ina1,inb1;
    cin>>ina>>inb>>ina1>>inb1;
    s1.set(ina,inb);
    s2.set(ina1,inb1);
    s1.display();
    s2.display();
    s3 = add(s1,s2);
    
    
}


