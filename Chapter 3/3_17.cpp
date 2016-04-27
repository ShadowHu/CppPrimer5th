/*************************************************************************
	> File Name: 3_17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月15日 星期五 10时18分27秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> svec;
    string s;
    while(cin>>s) svec.push_back(s);
    for(auto &st : svec){
        for(auto &c : st) c = toupper(c);
    }
    for(auto c : svec) cout<<c<<endl;
    return 0;
}

