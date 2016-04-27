/*************************************************************************
	> File Name: 4_19.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月20日 星期三 21时47分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ival = -1;
    vector<int> vec = {1,2,3,4,5,6,7};
    if(ival++ && ival) cout<<ival<<endl;
    if(vec[ival++] <= vec[ival]) cout<<vec[ival]<<endl;
    return 0;
}
