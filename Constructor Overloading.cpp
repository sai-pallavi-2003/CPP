#include<iostream>
using namespace std;
class Demo{
    private:
    double a;
    public:
    Demo(){
        a = 10;
    }
    Demo(int b){
        a=b;
    }
    Demo (double c){
        a=c;
    }
    double geta(){
        return a;
    }
};
int main(){
    Demo d, d1(20),d2(2.5);
    cout<<"value from default constructor: "<<d.geta()<<endl;
    cout<<"value from paramterised constructor of integer: "<<d1.geta()<<endl;
    cout<<"value from paramterised constructor of double: "<<d2.geta()<<endl;
    
}
