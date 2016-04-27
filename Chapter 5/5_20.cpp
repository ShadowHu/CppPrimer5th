/*************************************************************************
	> File Name: 5_20.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 11时04分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s;
    string pre = "\0";
    bool gotit = false;

    while(cin>>s){
        if(s == pre){
            gotit = true;
            break;
        }
        else pre = s;
    }

    if(gotit == true){
        cout<<"\n"<<s<<endl;
    }else{
        cout<<"\nno continuous word"<<endl;
    }
    return 0;
}
