#include<iostream>
using namespace std;
//user defined function
int largestnumber(int a,int b,int c){
int max;
if(a>=b&&a>=c){
max=a;
}
else if(b>=a&&b>=c){
max=b;
}
else{
max=c;
}
return max;
}
int main(){
          int n1,n2,n3,largest;
          cout<<"enter the first number";
 	  cin>>n1;
	  cout<<"enter the second number:";
	  cin>>n2;
	  cout<<"enter the third number:";
	  cin>>n3;
 	  //calling out function
	  largest=largestnumber(n1,n2,n3);
	  cout<<"largest number is :"<<largest<<endl;
          return 0;
}



