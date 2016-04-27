/*************************************************************************
	> File Name: 7_3.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年09月05日 星期五 18时43分57秒
 ************************************************************************/

#include<iostream>
#include"7_2.h"
using namespace std;

int main(){
    Sales_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sales_data trans;
        while(cin>>trans.bookNo>>trans.units_sold>>trans.revenue){
            if(total.isbn()==trans.isbn()){
               total.combine(trans); 
            }
            else{
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
    }else{
        cerr<<"No data?!"<<endl;
    }
    return 0;
}               
