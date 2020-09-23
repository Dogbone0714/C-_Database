#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a=0, b=0;
	
	cin >> a;
	
	if(a >= 0){
		b = a;
		cout << b << endl;
	}
	else if(a < 0){
		b = a*(-1);
		cout << b << endl;
	}


}

