// Create a Rupee class and convert it into int. And Display it.
// Example int main()
// {
//  Rupee r = 10;
//  int x = r;
// cout<<x;
//  return 0;
// }
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
};
int main(){
    int x;
    rupee r=10;
    x=r;
    cout<<"The converstion of int to rupee:"<<x<<endl;
    r.display();
    return 0;
}