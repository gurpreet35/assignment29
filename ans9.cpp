// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example int main()
// {
//  int x = 50;
// Dollar d;
// d = x;
// d.display();
//  return 0;
// }
#include<iostream>
using namespace std;
class dollar{
    int x;
    public:
    dollar(){
        x=0;
    }
    dollar(int p){
        x=p;
    }
    operator int(){
        return x;
    }
    void display(){
        cout<<"the value of dollar is:"<<x<<endl;
    }
};
int main(){
    int x=50;
    dollar d;
    d=x;
    cout<<"The converstion of int to dollar:"<<x<<endl;
    d.display();
    return 0;
}