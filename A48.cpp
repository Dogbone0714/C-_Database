#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b;
 	cin>>a;
 	for(int j=2;j<=a;j++){
 		b=0;
 		for(int i=2;i<=sqrt(j);i++){
 			if(j%i==0){
 				b=1;
 				break;
 			}
 		}
 		if(b==0){
 			cout<<j<<" ";
 		}
 	}
 cout<<endl;
}

