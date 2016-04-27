/*************************************************************************
	> File Name: 6_11.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 13时52分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

void reset(int &n){
    n = 0;
}

int main(){
    int j = 41;
    reset(j);
    cout<<j<<endl;
    return 0;
}
