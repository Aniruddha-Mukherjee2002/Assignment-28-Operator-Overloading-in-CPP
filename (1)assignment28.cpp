#include<iostream>
using namespace std;
class info
{

    int data;
    public:
   friend ostream& operator<<(ostream &os,info i);
   friend istream& operator>>(istream &is,info i);

};
ostream& operator<<(ostream &os,info i)
{
    os<<i.data;
    return os;
}
istream& operator>>(istream &is,info i)
{
    is>>i.data;
    return is;
}
int main()
{
    info i1,i2;
    cin>>i1>>i2;
    cout<<i1<<i2;
    return 0;
}
