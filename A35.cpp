#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
 int a,b;
 cin>>a;
 b=sqrt(a);
 if(a==1){
 cout<<"NOT PRIME"<<endl;
 }
 if(a==2||a==3){
 cout<<"PRIME"<<endl; 
 }
 for(int i=2;i<=b;i++){
 if(a%i==0){
 cout<<"NOT PRIME"<<endl;
 break;
 }
 if(i==b){
 cout<<"PRIME"<<endl;
 }
 }
 return 0;
}
