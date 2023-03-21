#include<iostream>
using namespace std;
class Complex
{
private:
    int x,y;
public:
    void setData(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void showData(){
    cout<<"Real="<<x<<" "<<"imaginary="<<y;
    }
};
int main(){
Complex c;
c.setData(12,23);
c.showData();
}
