/*************************************************************************
	> File Name: 7_1.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年09月05日 星期五 15时39分27秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main(){
    Sales_data total;
    if(cin>>total.bookNo>>total.units_sold>>total.revenue){
        Sales_data trans;
        while(cin>>trans.bookNo>>trans.units_sold>>trans.revenue){
            if(total.bookNo == trans.bookNo){
                total.units_sold += trans.units_sold;
                total.revenue = (total.units_sold * total.revenue + trans.units_sold * trans.revenue) / (total.units_sold + trans.units_sold);
            }
            else{
                cout<<total.bookNo<<" "<<total.units_sold<<" "
                <<total.revenue<<endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<endl;
    }

    return 0;
}
