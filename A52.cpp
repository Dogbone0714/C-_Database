#include <iostream>
#include <math.h>
using namespace std;
int a,s=1;
int space(int x);
int star(int y);
int main(int argc, char** argv) {
 cin>>a;
 for(int k=1;k<=a&&k>=1;k+=s){
 if(k==a){
 star(k*3);
 s*=-1;
 }
 else{
 space(a-k);
 star(k);
 }
 cout<<endl;
 }
 return 0;
}
int space(int x){
 for(int i=1;i<=2*x;i++){
 cout<<" ";
 }
}
int star(int y){
 for(int j=1;j<=y;j++){
 cout<<"*";
 }
}
