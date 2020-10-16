#include <iostream>
#include <math.h>
using namespace std;
int a;
int space(int x);
int main(void) {
 	cin>>a;
 	for(int j=1;j<=a;j++){
 		space(j-1);
 		cout<<"*";
 		space((a-j)*2-1);
 		if(j!=a){
 			cout<<"*";
 		}
 	space((j-1)*2-1);
 	if(j!=1){
 		cout<<"*";
 	}
 	space((a-j)*2-1);
 	if(j!=a){
 		cout<<"*";
 	}
 	cout<<endl;
 	}
 return 0;
}
int space(int x){
 	for(int i=1;i<=x;i++){
 	cout<<" "; 
 	}
}
