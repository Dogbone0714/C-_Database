#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b,c,sum=0;
 	cin>>c;
 	for(int k=0;k<c;k++){
 		cin>>a>>b;
 		if(a%2==0){
 		a++;
 	}
 	for(int i=a;i<=b;i+=2){
 	sum+=i;
 	}
 	cout<<sum<<endl;
 	sum=0;
 	}
 	return 0;



}

