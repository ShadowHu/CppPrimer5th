/*************************************************************************
	> File Name: 5_5.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时17分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int grade[14] = {42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    
    for(int i:grade){
        if(i<60) cout<<"F"<<" ";
        else if(i<70) cout<<"D"<<" ";
        else if(i<80) cout<<"C"<<" ";
        else if(i<90) cout<<"B"<<" ";
        else if(i<100) cout<<"A"<<" ";
        else cout<<"A++"<<" ";
    }
    return 0;
}
