#include<iostream>
using namespace std;
class coordinate
{
private:
    int x,y,z;
public:
    void setData(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
    }
    void showData(){
    cout<<x<<" "<<y<<" "<<z<<endl;
    }
    coordinate operator,(coordinate c2){
    coordinate c3;
    c3.x=c2.x;
    c3.y=c2.y;
    c3.z=c2.z;
    return c3;
    }
};
int main(){
coordinate c1,c2,c3;
c1.setData(10,20,30);
c2.setData(40,50,60);
c3=(c1,c2);
c3.showData();
return 0;
}
