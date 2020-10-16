#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b,sum;
    cin>>a;
    sum=a;
    while(a/5>=1){
     sum+=a/5;
     a=a/5+a%5;
 	} 
 	cout<<sum<<endl;
}

