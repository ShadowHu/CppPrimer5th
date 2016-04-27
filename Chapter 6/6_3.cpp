/*************************************************************************
	> File Name: 6_3.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 21时17分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

int fact(int val){
    int pro = 1;
    for(;val >= 1;--val){
        pro *= val;
    }
    return pro;
}
int main(){
    int num;
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}
