/*************************************************************************
	> File Name: 6_5.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 21时25分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

int absolute(int val){
    return (val >= 0) ? val: -val;
}

int main(){
    int num;
    cin>>num;
    cout<<absolute(num)<<endl;
    return 0;
}
