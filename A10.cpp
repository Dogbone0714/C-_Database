#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int n;
	cin>>n;
	if(n<=10){
		cout<<n*100<<endl;
	}
	else{
		cout<<(n*100)-(100*(n/11))<< endl;
	}


}

