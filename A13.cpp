#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a=0, b=0, c=0,d=0;
	cin >> a >> b >> c;
	
	 if(a>b&&a>c){
 	d=a;
 	}
 	else if(b>a&&b>c){
 	d=b;
 	}
 	else{
 	d=c;
 	}
 	cout<<d<<endl;
 	return 0;



}

