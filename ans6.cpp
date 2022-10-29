// . Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in 
// int ) to Time class.
// Exampleint main()
// {
//  int duration;
//  cout<<”Enter time duration in minutes”;
//  cin>>duration;
//  Time t1 = duration;
//  t1.display();
//  return 0;
// }
#include<iostream>
using namespace std;
class time{
    int seconds;
    public:
    time(){seconds==0;}
    void display(){
        cout<<"Time in seconds :"<<seconds<<endl;
    }
    time(int duration){
        seconds=duration*60;
    }
};
int main(){
    int duration;
    cout<<"Enter time duration in minutes:";
    cin>>duration;
    time t1=duration;
    t1.display();
    return 0;
}