#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++){
		if(i==(a+1)/2){
			for(int k=1;k<=a;k++){
				cout<<"* ";
			}
		}
		else if(i==(a+1)/2-1||i==(a+1)/2+1){
			for(int j=1;j<a;j++){
			cout<<"* ";
			}
		}
		else{
			for(int j=1;j<=(a-1)/2;j++){
			cout<<" ";
		}
			if(i<(a+1)/2-1){
				for(int k=1;k<=i;k++){
				cout<<"* ";
			}
			}
			else {
				for(int k=1;k<=a-i+1;k++){
				cout<<"* ";
				}
			}
		}
	cout<<endl;
}



}

