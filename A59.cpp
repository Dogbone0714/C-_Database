#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	long long int a,b,n;
	cin>>a>>b>>n;
	cout<<a/b<<".";
	for (int i=1;i<=n;i++){
		cout<<a%b*10/b;
		a=a%b*10;
	}
	cout<<endl;
}

