#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
		int x,a=1;
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int j=0;j<x-i;j++){
		cout<<" ";
		}
		for(int j=0;j<a;j++){
		cout<<a%10;
		}
		a=a+2;
		cout<<endl;
	}
}

