#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	 int a;
 	cin>>a;
 	for(int i=2;i<=a*2;i+=2){
 		for(int j=i;j<i+i;j+=2){
 		cout<<j<<" ";
 		}
 		cout<<endl;
 		}
}

