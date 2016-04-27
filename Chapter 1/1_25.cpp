/*************************************************************************
	> File Name: 1_25.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月10日 星期日 21时49分26秒
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main(){
    Sales_item total;
    if(cin>>total){
        Sales_item trans;
        while(cin>>trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }else{
                cout<<total<<endl;
                total = trans;
            }
        }
        cout<<total<<endl;
    }else{
        cout<<"error"<<endl;
        return -1;
    }
    return 0;
}
