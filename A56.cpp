#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	for(;;){
 		int a,sum=0;
 		double b=0.1;
 		cin>>a;
 		while(a/2>=1){
 			b*=10;
 			sum=sum+(a%2)*b;
 			a/=2;
 		}
 		cout<<b*10+sum<<endl;
 	}
}

