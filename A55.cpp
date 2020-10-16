#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int a,s;
 	cin>>a;
 	int b[a];
 	int max=0;
 	for(int i=0;i<a;i++){
 		cin>>b[i];
 		if(b[i]>max){
 			max=b[i];
 			s=i+1;
 		}
 	}
cout<<s<<" "<<max<<endl;
}

