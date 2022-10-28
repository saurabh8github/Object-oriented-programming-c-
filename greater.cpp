#include<iostream>
using namespace std;
void max(int a,int b)
{
    if(a>b){cout<<"the large number is:"<<a;}
    else {cout<<"the large number is : "<<b;}
}
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    max(a,b);

}