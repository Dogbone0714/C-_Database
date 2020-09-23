#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b,max=0,m;
 	cin>>a;
 	for(int i=0;i<a;i++){
 	cin>>b;
 	if(b>max){
 	max=b;
 	m=i+1;
 	}
 	}
 	cout<<m<<" "<<max<<endl;



}

