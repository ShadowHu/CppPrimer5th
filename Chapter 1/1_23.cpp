/*************************************************************************
	> File Name: 1_23.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月10日 星期日 21时37分32秒
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main(){
    Sales_item book,Nbook;
    int cou;
    if(cin>>book){
        cou = 1;
        while(cin>>Nbook){
            if(book.isbn() == Nbook.isbn()){
                cou++;
            }else{
                cout<<book.isbn()<<" "<<cou<<endl;
                book = Nbook;
                cou = 1;
            }
        }
        cout<<book.isbn()<<" "<<cou<<endl;
    }
    return 0;
}
