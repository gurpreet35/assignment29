// .Write a C++ program to convert Primitive type to Complex type.
//  Example -
//  int main()
// {
//  Complex c1;
//  Int x=5;
//  c1=x;
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
    void display(){
        cout<<"Complex  is : "<<x<<" + i"<<y<<endl;
    }
};
int main(){
    float z=7;
    complex c1;
    c1=z;                 //primitive to complex
    c1.display();
    return 0;
}