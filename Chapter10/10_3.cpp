#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

//accumulate求和

int main(){
	vector<int> v = {1,2,3,4,5};
	int res = accumulate(v.cbegin(), v.cend(), 0);
	cout<<res<<endl;
	return 0;
}