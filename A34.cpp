#include <iostream>
using namespace std;
int main()
{
 	int num,num2,max = 0;
 	cin>>num>>num2;
 	for (int i=1;i<=num2;i+=1){
 		if (num%i==0&&num2%i==0){
 		max=i;
		}
	}
 	cout<<max<<endl;
}
