#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<i;j++){
		cout<<" ";
	}
	cout<<"*";
	for(int j=0;j<(a-i-1)*2+1;j++){
		cout<<" ";
	}
	if(i!=a)
	cout<<"*"<<endl;
	}
	cout<<endl;
}

