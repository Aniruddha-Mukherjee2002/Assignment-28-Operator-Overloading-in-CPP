#include<iostream>
using namespace std;
class Array
{
private:
    int arr[100];
    const int size=100;
public:
    void setArray(int num,int index){
    arr[index]=num;
    }
    int operator[](int index){
    if(index >= size)
    {
        cout<<"Array index out of bound Exception."<<endl;
        exit(0);
    }
    return arr[index];
    }
    void display(int index){cout<<arr[index]<<endl;}
};
int main(){
Array a1;
a1.setArray(5,50);
cout<<a1[150];
return 0;
}
