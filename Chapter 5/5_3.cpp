/*************************************************************************
	> File Name: 5_3.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时09分54秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val,++val;
    }
    cout << "Sum of 1 to 10 inclusive is "<< sum << endl;
    return 0;
}
