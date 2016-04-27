/*************************************************************************
	> File Name: 7_2.h
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年09月05日 星期五 18时27分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Sales_data{
    public: 
    string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
    
    Sales_data& combine(const Sales_data &sd);
    string isbn() const;
};

Sales_data& Sales_data::combine(const Sales_data &sd){
    if(sd.bookNo == bookNo){
        units_sold += sd.units_sold;
        revenue = (units_sold * revenue + sd.units_sold * sd.revenue) / (units_sold + sd.units_sold);
    }else{
        cerr<<"Different book"<<endl;
    }
    return *this;
}

string Sales_data::isbn() const{
    return bookNo;
}

