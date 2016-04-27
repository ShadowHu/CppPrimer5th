/*************************************************************************
	> File Name: 5_6.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时34分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int grade[14] = {42,65,95,100,39,67,95,76,88,76,83,92,76,93};

    for(int i:grade){
        (i<60)? cout<<"F"<<" ":
        (i<70)? cout<<"D"<<" ":
        (i<80)? cout<<"C"<<" ":
        (i<90)? cout<<"B"<<" ":
        (i<100)? cout<<"A"<<" ": cout<<"A++"<<" ";
    }
    return 0;
}
