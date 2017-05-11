#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

//读取string序列存入list中

int main(){
	list<string> str = {"1","2","3","3","2"};
	string val = "2";
	auto cou = count(str.cbegin(), str.cend(), val);
	cout<<cou<<endl;
	return 0;
}