#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char upper,lower;
	cout<<"输入一个大写字母：";
	cin>>upper;
	lower=tolower(upper);
	cout<<"他的小写是:"<<lower<<endl;
	return 0;
}
