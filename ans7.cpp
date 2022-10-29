// Create two class Time and Minute and add required getter and setter including constructors. 
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//  Time t1(2,30);
//  t1.display();
//  Minute m1;
//  m1.display();
//  m1=t1 // Fetch minute from time
//  t1.display();
//  m1.display();
//  return 0;
// }
#include<iostream>
using namespace std;
class timer{
    int hour, min ;
    public:
    timer(){}
    timer(int h,int m){
        hour=h;
        min=m;
    }
    void display(){
        cout<<"Time is:  "<<"hour:mminute"<<hour<<":"<<min<<endl;
    }
    int getter(){
        return hour*60+min;
    }
};
class minute{
    int x;
    public:
    minute(){x=0;}
    minute(timer t1){
      x=t1.getter();
    }
    minute(int m){
        x=m;
    }
     void display(){
        cout<<"Time in minute:  "<<x<<endl;
    }
    
};
int main(){
 timer t1(2,30);
 t1.display();
 minute m1;
 m1.display();
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
    return 0;
}