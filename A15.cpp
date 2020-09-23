#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int X=0,Y=0;
	cin >> X >> Y;
	
	if(X>0&&Y>0){
 	cout<<"第一象限"<<endl; 
	}
 	else if(X<0&&Y>0){
 	cout<<"第二象限"<<endl; 
 	}
 	else if(X<0&&Y<0){
 	cout<<"第三象限"<<endl; 
 	}
 	else if(X>0&&Y<0){
 	cout<<"第四象限"<<endl; 
 	}
 	else if(X==0&&Y!=0){
 	cout<<"Y軸"<<endl; 
 	}
 	else if(X!=0&&Y==0){
 	cout<<"X軸"<<endl; 
 	}
 	else if(X==0&&Y==0){
 	cout<<"原點"<<endl; 
 	}

}

