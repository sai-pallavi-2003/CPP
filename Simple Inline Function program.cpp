#include<iostream>
using namespace std;
inline int cube(int x){
    int y=x*x*x;
    cout<<y;
    return 0;
}
int main(){
    int a;
    cout<<"give the number: ";
    cin>>a;
    cube(a);
    return 0;
}
