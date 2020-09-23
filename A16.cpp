#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int x=0,y=0,z=0;
 	cin>>x>>y;
 	if(x%2!=0){
 	z=z+100;
 	}
 	if(y==2||y==5||y==8){
 	z=z+200;
 	}
 	if(x==y){
 	z=z+50;
 	}
 	cout<<z<<endl;



}

