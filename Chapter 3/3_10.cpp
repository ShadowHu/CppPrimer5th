/*************************************************************************
	> File Name: 3_10.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月14日 星期四 21时21分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s = "hello,,world!!!";
    string fina;
    for(auto &i : s){
        if(!ispunct(i))
            fina += i;
    }
    cout<<fina<<endl;
    return 0;
}
