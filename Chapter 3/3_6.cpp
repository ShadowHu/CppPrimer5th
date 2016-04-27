/*************************************************************************
	> File Name: 3_6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月14日 星期四 20时54分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s = "hello world!";
    for(char &i : s){
        if(!isspace(i)){
            i = 'X';
        }
    }
    cout<<s<<endl;
    return 0;
}
