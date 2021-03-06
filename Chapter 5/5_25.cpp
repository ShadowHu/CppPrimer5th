/*************************************************************************
	> File Name: 5_25.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 20时59分47秒
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        try{
            if(b == 0)
                throw runtime_error("dominator can't be 0");
            cout<<a/b<<endl;
        }catch(runtime_error err){
            cout<<err.what()
                <<"\nTry again? Enter y or n"<<endl;
            char c;
            cin>>c;
            if(!cin || c == 'n')
                break;
        }
    }

    return 0;
}
