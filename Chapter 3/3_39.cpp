/*************************************************************************
	> File Name: 3_39.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月18日 星期一 16时00分33秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
/*    string a = "hello world";
    string b = "Hello World";

    if(a == b) cout<<"Same"<<endl;
    else cout<<"Different"<<endl;
    */
    const char a[] = "hello world";
    const char b[] = "hello world";

    if(strcmp(a,b) == 0) cout<<"Same"<<endl;
    else cout<<"Different"<<endl;

    return 0;
}
