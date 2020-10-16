#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void){
	int x,a,ans;
	int y[10];
	while(cin>>x){
		if(x==0)
		break;
		a=1;
	for(int i=0;i<x;i++){
		cin>>y[i];
		a=a*y[i];
	}
	for(int i=1;i<=a;i++){
		ans=0;
			for(int j=0;j<x;j++){
				if(i%y[j]==0)
				ans++;
			}
			if(ans==x){
			cout<<i<<endl;
			break;
			}
		}
	}
}

