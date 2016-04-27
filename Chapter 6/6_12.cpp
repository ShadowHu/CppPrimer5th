/*************************************************************************
	> File Name: 6_12.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 13时53分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

void swap(int &r1,int &r2){
    int t;
    t = r1;
    r1 = r2;
    r2 = t;
}

int main(){
    int num1 = 1,num2 = 2;
    swap(num1,num2);

    cout<<num1<<" "<<num2<<endl;
    return 0;
}
