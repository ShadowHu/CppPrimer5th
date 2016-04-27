/*************************************************************************
	> File Name: 5_19.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月23日 星期六 16时32分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int main(){
    string s1,s2;
    
    do{
        cout<<"Enter 2 strings:";
        cin>>s1>>s2;
        (s1.size() > s2.size())? cout<<s2<<endl:cout<<s1<<endl;
    }while(cin);

    return 0;
}
