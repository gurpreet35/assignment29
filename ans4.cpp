// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  return 0;
// }
#include<iostream>
using namespace std;
class product{
    int x,y;
    public:
    product(){
        x=0;y=0;
    }
    product(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getProductX(){
        return x;
    }
    int getProductY(){
        return y;
    }
    void display(){
        cout<<"Product is:"<<x*y<<endl;
    }
  

};
class item{
    int p;
    public:
    item(){p=0;}
   
    item(int p){
       this->p=p;
    }
    item operator ={
        
    }
    operator product(){

         return *this;
     }
    void display(){
        cout<<"Sum of the variables are:"<<p<<endl;
    }
};
int main(){
    product p1(5,6);
    item i1; 
    p1.display();
    i1=p1;
    i1.display();
    return 0;
}
