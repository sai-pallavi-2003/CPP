//opertors donot work the same way for user-defined class objects as they work for primitive data types
//operator overloading should be done with a function that is inside class since it is applicable only for that class
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
        cout<<"The complex number now is: "<<real<<" "<<"+"<<"i"<<imag<<endl;
    }
    Complex operator -(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }
    Complex operator +(Complex c){
        Complex tempp;
        tempp.real = real + c.real;
        tempp.imag = imag + c.imag;
        return tempp;
    }
};
int main(){
    Complex c1,c2,c3,c4;
    c1 = Complex(3.5,2.5);
    c2 = Complex(1.5,1.5);
    c3 = c1-c2;
    c3.display();
    c4 = c1+c2;
    c4.display();
    return 0;
}
