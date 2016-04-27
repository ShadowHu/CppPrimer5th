/*************************************************************************
	> File Name: 7_7.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年09月05日 星期五 21时33分31秒
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
    Sales_data add(const Sales_data &sd1, const Sales_data &sd2);
    istream& read(istream& is,Sales_data &sd ){
        is>>sd.bookNo>>sd.units_sold>>sd.revenue;
        return is;
    }
    ostream& print(ostream &os,const Sales_data &sd){
        os<<sd.bookNo<<" "<<sd.units_sold<<" "<<sd.revenue;
        return os;
    }
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

Sales_data Sales_data:: add(const Sales_data &sd1, const Sales_data &sd2){
    Sales_data sum = sd1;
    sum.combine(sd2);
    return sum;
}


int main(){
    Sales_data total;
    if(read(cin,total)){
        Sales_data trans;
        while(read(cin,total)){
            if(total.isbn() == trans.isbn()){
                total.combine(trans);
            }else{
                total = trans;
                print(cout,total);
            }
        }
        Sales_data::print(cout,total);
    }
    return 0;
}
