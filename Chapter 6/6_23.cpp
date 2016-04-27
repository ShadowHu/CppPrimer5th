/*************************************************************************
	> File Name: 6_23.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 17时00分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

void print(const int &i){
    cout<<i<<endl;
}

void print(const int a[],int i){
    for(int j = 0;j<i;++j){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
int main(){
    int i = 0, j[2] = {0,1};
    print(i);
    print(j,end(j)-begin(j));
    return 0;
}
