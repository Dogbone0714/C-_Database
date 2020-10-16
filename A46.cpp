#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int x,y;
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int j=0;j<x-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j%10;
		}
		for(int j=i-1;j>0;j--){
			cout<<j%10;
		}
		cout<<endl;
	}
	for(int i=1;i<x;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int j=1;j<=x-i;j++){
			cout<<j%10;
		}
		for(int j=x-i-1;j>0;j--){
			cout<<j%10;
		}
		cout<<endl;
	}
}

