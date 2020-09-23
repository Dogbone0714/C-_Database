#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,b=0;
	
	cin >> a >> b;
	if(a>b){
		cout << ">" << endl;
	}
	else if(a==b){
		cout << "=" << endl;
	}
	else if(a<b){
		cout << "<" << endl;
	}



}

