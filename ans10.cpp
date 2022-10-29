// . Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
// Dollar and Dollar to Rupee conversion.
// Example int main()
// {
//  Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
//  return 0;
//}
#include<iostream>
using namespace std;

class rupee{
    int x;
    public:
    rupee(){
        x=0;
    }
    rupee(int p){
        x=p;
    }
    operator int(){
        return x;
    }
    
    void display(){
        cout<<"the value of rupee is:"<<x<<endl;
    }
    int getterX(){
        return x/100;
    }
};
class dollar{
    int x;
    public:
    dollar(){
        x=0;
    }
    dollar(int p){
        x=p;
    }
    dollar(rupee r1){
        this->x=r1.getterX();
    }
    operator rupee(){
        return x*100;
    }
    operator int(){
        return x;
    }
    void display(){
        cout<<"the value of dollar is:"<<x<<endl;
    }
};
int main(){
     rupee r = 23;
     dollar d = r; // Rupee to Dollar conversion
     d.display();
     r.display();
     r =d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}