#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b,c=0;
	cin >> a >> b >> c;
	if((a+b)>c&&(b+c)>a&&(c+a)>b){
		cout << "YES" << endl;	
	}
	else{
		cout  << "NO" <<  endl;
	}
 	


}

