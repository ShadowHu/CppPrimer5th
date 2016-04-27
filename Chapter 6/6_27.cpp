/*************************************************************************
	> File Name: 6_27.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 21时26分20秒
 ************************************************************************/

#include<iostream>
using namespace std;

int il_sum(initializer_list<int> il){
    auto beg = il.begin();
    int sum = 0;
    for(;beg != il.end();++beg){
        sum += *beg;
    }
    return sum;
}

int main(){
    initializer_list<int> il = {1,2,3,4};
    cout<<il_sum(il)<<endl;
    return 0;
}
