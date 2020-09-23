#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a=0;
	cin >> a;
	if (a%2==0&&a%7!=0){
		cout << "It's multiple of 2." << endl;
	}
	else if (a%7==0&&a%2!=0){
		cout << "It's multiple of 7." << endl;
	}
	else if (a%7==0&&a%2==0){
		cout << "It's multiple of 2 and 7." << endl;
	}
	else if (a%7!=0&&a%2!=0){
		cout << "It isn't multiple of 2 and 7." << endl;
	}


}

