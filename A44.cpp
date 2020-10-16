#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a;
 	cin>>a;
	while(a%10==0){
 	a*=0.1;
 	}
 	for(;;){
 		cout<<a%10;
 		a*=0.1;
 		if(a==0){
 			cout<<endl;
 			break;
 		}
 	}
}

