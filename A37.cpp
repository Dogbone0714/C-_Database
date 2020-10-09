#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b=0;
	cin>>a;
	for(;;){
		b=b+a%10;
		a=a*0.1;
		if(a==0){
			break;
		}
	}
	cout<<b<<endl;
	return 0;
}



}

