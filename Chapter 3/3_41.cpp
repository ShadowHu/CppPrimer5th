/*************************************************************************
	> File Name: 3_41.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月19日 星期二 13时24分41秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ia[] = {0,1,2,3,4};
    vector<int> ivec(begin(ia),end(ia));
    for(auto i: ivec) cout<<i<<endl;
    return 0;
}
