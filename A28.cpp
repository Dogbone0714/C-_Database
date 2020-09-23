#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main(void){
	int x,y,a=0,b;
	cin>>x;
	for(int i=1;i<=x;i++){
	for(int j=1;j<=x;j++){
	cout<<j<<"x"<<i<<"="<<setw(2)<<i*j<<" ";
	}
	cout<<endl;
	}



}

