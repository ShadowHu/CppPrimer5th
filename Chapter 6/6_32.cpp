/*************************************************************************
	> File Name: 6_32.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月31日 星期日 17时25分43秒
 ************************************************************************/

#include<iostream>
using namespace std;

int &get(int *arry, int index){ return arry[index]; }

int main(){
    int ia[10];
    for(int i = 0;i != 10;++i){
        get(ia,i) = i;
        cout<<get(ia,i)<<" ";
    }

    return 0;
}
