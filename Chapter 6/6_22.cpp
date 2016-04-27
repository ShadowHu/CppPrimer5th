/*************************************************************************
	> File Name: 6_22.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 16时14分03秒
 ************************************************************************/

#include<iostream>
using namespace std;

void swapp(int *&p1,int *&p2){
    int *t;
    t = p1;
    p1 = p2;
    p2 = t;
}

int main(){
    int num1 = 1,num2 = 2;
    int *a1 = &num1;
    int *a2 = &num2;
    swapp(a1,a2);

    cout<<*a1<<" "<<*a2<<endl;
    return 0;
}
