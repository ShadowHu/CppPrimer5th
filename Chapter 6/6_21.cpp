/*************************************************************************
	> File Name: 6_21.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 16时10分20秒
 ************************************************************************/

#include<iostream>
using namespace std;

int bigger(int i,const int *a){
    return (i>*a)? i:*a;
}

int main(){
    int num = 1;
    int a[3] = {1,1,2};
    cout<<bigger(num,a)<<endl;
    return 0;
}
