#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int x,y,z=1;
	cin>>x>>y;
	for (int i=0;i<y;i++){
	z=z*(x-i);
	}
	cout<<z<<endl;
}

