/*************************************************************************
	> File Name: 5_9.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时48分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    char ch;
    int a = 0,e = 0, i = 0, o = 0, u = 0;
    while(cin>>ch){
        if(ch == 'a') ++a;
        else if(ch == 'e') ++e;
        else if(ch == 'i') ++i;
        else if(ch == 'o') ++o;
        else if(ch == 'u') ++u;
    }
    cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u<<endl;
    return 0;
}
