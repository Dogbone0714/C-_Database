#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
int a;
 cin>>a;
 for(int i=1;i<=a;i++){
 for(int k=1;k<=a-i;k++){
 cout<<" ";
 }
 for(int j=1;j<=i;j++){
 cout<<i%10;
 }
 cout<<endl;
 }



}

