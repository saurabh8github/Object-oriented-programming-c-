#include<iostream>
using namespace std;
class salary
{   private:
    int sal=7;
    friend int increment(salary s);
};
int increment(salary s)
{
    s.sal=s.sal+7000;
    return s.sal;
}
int main(){
    salary s;
    cout<<"Incremented is: ";
    cout<<increment(s);
    return 0;
}