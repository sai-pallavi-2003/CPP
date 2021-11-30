#include<iostream>
using namespace std;
class Complex{
    double real,imag;
    public:
    Complex(){
        
    }
    Complex(double a,double b){
        real = a;
        imag = b;
    }
    void display(){
        cout<<"The difference is: "<<real<<" "<<"+"<<"i"<<imag;
    }
    Complex operator -(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1 = Complex(3.5,2.5);
    c2 = Complex(1.5,1.5);
    c3 = c1-c2;
    c3.display();
    return 0;
    
}
