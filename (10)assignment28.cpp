#include<iostream>
using namespace std;
class Distance
{
private:
    int feet,inch;
public:
    Distance() {
    feet=0;inch=0;
    }
    Distance(int x,int y){
    feet=x;
    inch=y;
    }
    void operator()(int a,int b,int c){
    feet=a+c+5;
    inch=a+b+15;
    }
    void show(){cout<<"feet="<<feet<<" inch="<<inch<<endl;}

};
int main(){
Distance d(0,0);
d.operator()(10,20,30);
d.show();
return 0;
}
