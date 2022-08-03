#include<iostream>
using namespace std;
int area(int);
int area(int, int);
float area(float);
float area(float,float);
int main(){
       int s,l,b;
       float r,bs,ht;
cout<<"enter side of a square:";
cin>>s;
cout<<"enter length and breadth of rectangle";
cin>>l>>b;
cout<<"enter radius of circle:";
cin>>r;
cout<<"enter base and height of triangle:";
cin>>bs>>ht;
cout<<"Area of square is "<<area(s);
cout<<"\nArea of ractangel is "<<area(l,b);
cout<<"\nArea of circle is "<<area(r);
cout<<"\nArea of triangl is "<<area(bs,ht);
}
int area(int s){return(s*s);}
int area(int l,int b){return(l*b);}
float area(float r){return(3.14*r*r);}
float area(float bs,float ht){return((bs*ht)/2);}
