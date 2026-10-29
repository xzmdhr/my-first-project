#include <iostream>
using namespace std;
int main(){
	int sum=0;
	for(int n=1;n<=100;n++){
		if(n%2==0){
			sum=sum+n;
		}
	}
	cout<<"double number +="<<sum<<endl;
	return 0;
}
