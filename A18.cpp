#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	double kg,m=0;
	
	cin >> kg >> m;
	double BMI = kg/m/m;
	 if(BMI<18){
 	cout<<"�L��"<<endl; 
	}
 	else if(BMI>=18&&BMI<24){
 	cout<<"���`"<<endl; 
 	}
 	else if(BMI>=24&&BMI<27){
 	cout<<"�L��"<<endl; 
 	}
 	else
 	cout<<"�έD"<<endl; 



}

