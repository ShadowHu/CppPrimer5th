/*************************************************************************
	> File Name: 6_26.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 21时02分30秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
    for(int i = 1;i < argc;++i){
        cout<<argv[i]<<" ";
    }
    cout<<endl;
    return 0;
}
