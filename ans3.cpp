// Create a Product class and convert Product type to Item type using constructor
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
    int p,q;
    public:
    item(){p=0;q=0;}
    item(product p1){
        p=p1.getProductX();
        q=p1.getProductY();
        
    }
    item(int p,int q){
       this->p=p;
       this->q=q;
    }
    void display(){
        cout<<"Sum of the variables are:"<<p+q<<endl;
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
