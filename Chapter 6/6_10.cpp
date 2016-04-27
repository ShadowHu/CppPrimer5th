/*************************************************************************
	> File Name: 6_10.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月25日 星期一 16时38分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int num1 = 1,num2 = 2;
    int *q1 = &num1;
    int *q2 = &num2;
    swap(q1,q2);
    cout<<*q1<<" "<<*q2<<endl;
    return 0;
}
