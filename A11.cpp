#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(void){
	int BigGreen=0, SmallGreen=0, Blue=0, Purple=0;
	
	cin >> SmallGreen;
	
	BigGreen = SmallGreen+3; 
	Blue = SmallGreen*2-5;
	Purple = Blue/10*10+(BigGreen%10);
	
	cout << Purple << endl;


}

