/*************************************************************************
	> File Name: 4_29.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 17时40分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int x[10];
    int *p = x;
    cout<<sizeof(x)/sizeof(*x)<<endl;
    cout<<sizeof(p)/sizeof(*p)<<endl;
    cout<<sizeof(p)<<endl;
    return 0;
}
