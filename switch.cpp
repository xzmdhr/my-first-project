#include <iostream>
using namespace std;
int main(){
	double i;
	double bonus;
	int s;
	cout<<"输入当月利润：";
	cin>>i;
	s=i/100000;
	double b1=100000*0.1;
	double b2=b1+100000*0.075;
	double b3=b2+200000*0.05;
	double b4=b3+200000*0.03;
	double b5=b4+400000*0.015;
	switch (s) {
	case 0:
		bonus=i*0.1;
		break;
	case 1:
		bonus=b1+(i-100000)*0.075;
		break;
	case 2:
	case 3:
		bonus=b2+(i-200000)*0.05;
		break;
	case 4:
	case 5:
		bonus=b3+(i-400000)*0.03;
		break;
	case 6:case 7:case 8:case 9:
		bonus=b4+(i-600000)*0.015;
		break;
	default:
		bonus=b5+(i-1000000)*0.01;
		break;
	}
	cout<<"奖金为"<<bonus<<"元"<<endl;
	return 0;
}
