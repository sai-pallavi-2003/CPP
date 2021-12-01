#include<iostream>
#include<typeinfo>
using namespace std;
template<class T1, class T2>
class swapp{
    T1 a;
    T2 b;
    public:
    swapp(T1 x, T2 y){
        int temp;
        temp = x;
        x = y;
        y = temp;
        a = x;
        b = y;
    }
    void display(){
        cout<<"After swapping : "<<a<<"  "<<b;
    }
};
int main(){
    cout<<"Before Swapping : 4  6"<<endl;
    swapp<int,int>d(4,6);
    d.display();
    return 0;
}
