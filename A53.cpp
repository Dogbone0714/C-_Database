#include <iostream>
#include <math.h>
using namespace std;
int a,b=0,c=1,d;
int main(int argc, char** argv) {
 cin>>a;
 if(a==1){
 cout<<b+c<<endl;
 return 0;
 }
 for(int i=2;i<=a;i++){
 if(i==a){
 cout<<b+c<<endl;
 }
 d=b+c;
 b=c;
 c=d;
 }
 return 0;
}
