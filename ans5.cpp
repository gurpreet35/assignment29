// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//  Invent1 s1=(4,5);
//  Invent2 d1;
//  float tv;
//  tv=s1;
//  d1=s1;
//  return 0;
// }
#include<iostream>
using namespace std;
class invest1{
    int x,y;
    public:
    invest1(){x=0;y=0;}
    invest1(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getterX(){
        return x;
    }
    int getterY(){
        return y;
    }
    void display(){
        cout<<"Your investiation is :"<<x+y;
    }
    operator float(){
        return x+y;
    }
};
class invest2{
   int p,q;
   public:
   invest2(){p=0;q=0;}
   invest2(invest1 d1){
       p=d1.getterX();
       q=d1.getterY();
   }
   invest2(int p,int q){
    this->p=p;
    this->q=q;
   }
   void display(){
        cout<<"Your investiation is :"<<p+q<<endl;
    }
   };
int main(){
    invest1 s1(4,5);
    invest2 d1;
    float tv;
    tv=s1;
    d1=s1;
    d1.display();
    cout<<"floating value is :"<<tv<<endl;

    return 0;
}