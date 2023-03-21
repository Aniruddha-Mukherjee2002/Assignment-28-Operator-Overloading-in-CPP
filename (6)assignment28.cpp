#include<iostream>
using namespace std;
class assignment
{   private:
    int real,imag;
public:
    void operator=(assignment a3){

    real=a3.real;
    imag=a3.imag;

    }
    void show(){
    cout<<endl<<"Real="<<real<<" "<<"imaginary="<<imag<<endl;;
    }
    void setData(int x,int y){
    real=x;
    imag=y;
    }
};
int main(){
assignment a1,a2;
a1.setData(1,2);
a2.setData(3,4);
a1.show();
a2.show();

a1=a2;
a1.show();
return 0;
}
