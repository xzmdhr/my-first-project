#include <iostream>
using namespace std;
int main(){
	for(int i=100;i<=999;i++){
		int a=i/100,b=i/10%10,c=i%10;
		int sum=a*a*a+b*b*b+c*c*c;
		if(sum==i){
			cout<<i<<endl;
		}
	}
	return 0;
}
