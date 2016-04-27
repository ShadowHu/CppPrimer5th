/*************************************************************************
	> File Name: 3_8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月14日 星期四 21时04分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s = "hello world";
    decltype(s.size()) i = 0;
/*    while(i < s.size()){
        auto &change = s[i];
        if(!isspace(change))
            change = 'X';
        ++i;
    }
*/
    for(i = 0;i<s.size();i++){
        auto &change = s[i];
        if(!isspace(change))
            change = 'X';
    }
    cout<<s<<endl;
    return 0;
}
