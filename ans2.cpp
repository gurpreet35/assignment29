// Write a C++ program to convert Complex type to Primitive type.
//  Example -
//  int main()
// {
//  Complex c1;
//  c1.setData(3,4);
//  int x;
//  x=c1;
//  return 0;
// }
#include<iostream>
using namespace std;
class complex{
    int x;
    int y;
    public:
    complex(){x=0;y=0;}
    complex(int x,int y){
        this->x=x;
        this->y=y;
    }
    void operator =(int z){
         x=z;
         y=z;
    }
    operator int(){
         cout<<"Typecasting 'Y' to 'Complex'>>>>>>>>"<<endl;
         if(x>y){
            return this->x;
         }
         else
            return this->y;
    }
    void display(){
        cout<<"Complex  is : "<<x<<" + i"<<y<<endl;
    }
};
int main(){
    int y;
    complex c1(3,5);
    c1.display();
    y=c1;
    cout<<"the value of y is: "<<y<<endl;
    return 0;
}