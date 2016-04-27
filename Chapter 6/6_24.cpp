/*************************************************************************
	> File Name: 6_24.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 17时09分15秒
 ************************************************************************/

#include<iostream>
using namespace std;

void print(const int ia[10]){
    for(size_t i = 0;i != 10;++i)
        cout<<ia[i]<<endl;
}

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    print(a);
    return 0;
}
