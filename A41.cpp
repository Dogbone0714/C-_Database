#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,s=1;
    cin>>a;
    for(int i=1;i<=a&&i>=1;i+=s){
     for(int j=1;j<=i;j++){
     cout<<i%10; 
 	}
     if(i==a){
     s*=-1;
 	}
 	cout<<endl;
 	if(s==-1&&i!=1){
 		for(int k=1;k<=a-i+1;k++){
		 cout<<" ";
 		}
 	}
 }



}

