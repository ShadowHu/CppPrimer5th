/*************************************************************************
	> File Name: 6_30.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月31日 星期日 17时11分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

bool str_subrange(const string &str1, const string &str2){
    if(str1.size() == str2.size()){
        return str1 == str2;
    }

    auto sz = (str1.size() < str2.size()) ? str1.size(): str2.size();

    for(decltype(sz) i = 0;i != sz;++i ){
        if(str1[i] != str2[i]){
            return false;
        }
    }
}

int main(){
    cout<<str_subrange("hello","he")<<endl;

    return 0;
}
