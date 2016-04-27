/*************************************************************************
	> File Name: 5_10.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时54分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    char ch;
    int a = 0,e = 0, i = 0, o = 0, u = 0;
    while(cin>>ch){
        switch(ch){
            case 'a':
            case 'A':
                ++a;
                break;
            case 'e':
            case 'E':
                ++e;
                break;
            case 'i':
            case 'I':
                ++i;
                break;
            case 'o':
            case 'O':
                ++o;
                break;
            case 'u':
            case 'U':
                ++u;
                break;
        }
    }
    cout<<a<<" "<<e<<" "<<i<<" "<<o<<" "<<u<<endl;

    return 0;
}
