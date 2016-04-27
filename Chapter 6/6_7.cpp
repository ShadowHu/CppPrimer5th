/*************************************************************************
	> File Name: 6_7.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 21时45分39秒
 ************************************************************************/

#include<iostream>
using namespace std;

int call(){
    static int n = 0;
    return n++;
}

int main(){
    for(int i = 0;i<=10;++i){
        cout<<call()<<endl;    
    }
    return 0;
}
