//-------Program to demonistrate Operating Overloading-----------
#include<bits/stdc++.h>
using namespace std;
class operatorOverloading{
    int n1, n2;
    public:
    void setData(int, int);
    void getData();
    void Overload__();
};
void operatorOverloading::setData(int x, int y){
        n1=x;
        n2=y;
}
void operatorOverloading::getData(){
    cout<<"Number 1 = "<<n1<<endl;
    cout<<"NUmber 2 = "<<n2<<endl;
}
void operatorOverloading::Overload__(){
    n1--;
    n2--;
}

int main()
{
    class operatorOverloading op;
    cout<<"Before Operator Overloading\n";
    op.setData(2, 3);
    op.getData();
    cout<<"After Operator Overloading\n";
    op.Overload__();
    op.getData();
    return 0;
}