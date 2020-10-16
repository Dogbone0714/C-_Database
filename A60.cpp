#include <iostream>
#include<iomanip>
#include <math.h>
using namespace std;
int main(void) {
 	int a[6];
 	for(int i=0;i<6;i++){
 		cin>>a[i];
 	}
 	for(int i=5;i>=0;i--){
 		cout<<a[i]<<" ";
 	}
 	cout<<endl;
 	return 0;
}
