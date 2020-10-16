#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b,A=0,B=0;
 	cin>>a>>b;
 	int c[4],d[4];
 	for(int i=3;i>=0;i--){
 		c[i]=a%10;
 		a/=10;
 		d[i]=b%10;
 		b/=10;
 	}
 	for(int i=0;i<4;i++){
 		for(int j=0;j<4;j++){
 			if(c[i]==d[j]){
 				if(i==j){
 					A++;
 				}
 				else{
 					B++;
 				}		
 			}
 		}		
 	}
cout<<A<<"A"<<B<<"B"<<endl;
}

