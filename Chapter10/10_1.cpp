#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//读取int序列存入vector中，打印有多少个元素的值等于定值

int main(){
	vector<int> v = {1,2,3,4,5,6,7,8,7,6,5,4};
	int val = 4;
	auto cou = count(v.cbegin(), v.cend(), val);
	cout<<cou<<endl;
	return 0;
}
