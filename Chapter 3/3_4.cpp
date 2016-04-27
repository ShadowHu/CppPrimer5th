/*************************************************************************
	> File Name: 3_4.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月14日 星期四 16时34分10秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1 >= s2){
        cout<<"0"<<s1<<endl;
    }else if(s2 >= s1){
        cout<<"0"<<s2<<endl;
    }else{
        cout<<"1"<<s1<<endl;
    }
    return 0;
}
