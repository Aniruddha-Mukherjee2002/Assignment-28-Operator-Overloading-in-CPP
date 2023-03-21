#include<iostream>
using namespace std;
class code
{
private:
    int num;
public:
    void operator!(){
    num=!num;
    }
    void setData(int x){num=x;}
    void showData(){cout<<num<<endl;}
};
int main(){
code c1;
c1.setData(00);
!c1;
c1.showData();
}
