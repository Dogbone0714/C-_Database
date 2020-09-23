#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	double kg,m=0;
	
	cin >> kg >> m;
	double BMI = kg/m/m;
	 if(BMI<18){
 	cout<<"過輕"<<endl; 
	}
 	else if(BMI>=18&&BMI<24){
 	cout<<"正常"<<endl; 
 	}
 	else if(BMI>=24&&BMI<27){
 	cout<<"過重"<<endl; 
 	}
 	else
 	cout<<"肥胖"<<endl; 



}

