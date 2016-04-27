/*************************************************************************
	> File Name: 6_17.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 14时45分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

bool up_word(const string &s){
    for(auto i:s){
        if(i>='A' && i<='Z'){
            return true;
        }
    }
    return false;
}

void change_up(string &s){
    for(auto &i:s){
        i = toupper(i);
    }
}
int main(){
    string str("Hello World");
    cout<<up_word(str)<<endl;
    change_up(str);
    cout<<str<<endl;

    cout<<up_word("How do you do")<<endl;
    return 0;
}
