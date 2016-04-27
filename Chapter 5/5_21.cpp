/*************************************************************************
	> File Name: 5_21.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 11时42分12秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> v;
    string buf;
    while(cin>>buf && !buf.empty()){
        if(buf[0] <= 'A' || buf[0] >= 'Z')
            continue;
        else 
            v.push_back(buf);
    }
    
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
    return 0;
}
