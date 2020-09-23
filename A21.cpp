#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int N=0;
	cin >> N;
	 if(N%4!=0){
 	cout<<"NO"<<endl;
 	}
 	if(N%4==0&&N%100!=0){
 	cout<<"YES"<<endl;
 	}
 	if(N%100==0&&N%400!=0){
 	cout<<"NO"<<endl;
 	}
 	if(N%400==0){
 	cout<<"YES"<<endl;
 	}



}

