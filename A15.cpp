#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int X=0,Y=0;
	cin >> X >> Y;
	
	if(X>0&&Y>0){
 	cout<<"�Ĥ@�H��"<<endl; 
	}
 	else if(X<0&&Y>0){
 	cout<<"�ĤG�H��"<<endl; 
 	}
 	else if(X<0&&Y<0){
 	cout<<"�ĤT�H��"<<endl; 
 	}
 	else if(X>0&&Y<0){
 	cout<<"�ĥ|�H��"<<endl; 
 	}
 	else if(X==0&&Y!=0){
 	cout<<"Y�b"<<endl; 
 	}
 	else if(X!=0&&Y==0){
 	cout<<"X�b"<<endl; 
 	}
 	else if(X==0&&Y==0){
 	cout<<"���I"<<endl; 
 	}

}

