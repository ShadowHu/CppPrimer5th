/*************************************************************************
	> File Name: 3_40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月18日 星期一 16时09分09秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    const char a[] = "hello";
    const char b[] = "world";
    char c[20];
    strcpy(c,a);
    strcat(c," ");
    strcat(c,b);
    cout<<c<<endl;
    return 0;
}
