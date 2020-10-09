#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b=0;
 	cin>>a;
 	for(int i=1;i<=a;i++){
 		for(int j=1;j<=i;j++){
 		b++;
 		cout<<b%10;
 		}
 	cout<<endl;
 	}
 	return 0;
}


