/*************************************************************************
> File Name: 5_12.cpp
> Author: Shdow Hu
> Mail: shadow_hu1441@163.com
> Created Time: 2014年08月22日 星期五 18时18分09秒
************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s;
    bool pref = false;
    int ff = 0,fl = 0, fi = 0;
    int a = 0,e = 0, i = 0, o = 0, u = 0;
    int spa = 0,tab = 0, ent = 0;
    while(getline(cin,s)){
        for(char item:s){
            if(pref == true){
                if(item == 'f'){
                    ++ff;
                    pref = false;
                    continue;
                }
                else if(item == 'l'){
                    ++fl;
                    pref = false;
                }
                else if(item == 'i'){
                    ++fi;
                    pref = false;
                }
            }

            if(item == 'f'){
                pref = true;
            }
            else  if(item == 'a' || item == 'A'){
                ++a;
            }
            else if(item == 'e' || item == 'E'){
                ++e;
            } 
            else if(item == 'i' || item == 'I'){
                ++i;
            }
            else if(item == 'o' || item == 'O'){
                ++o;
            }
            else if(item == 'u' || item == 'U'){
                ++u;
            }
            else if(item == ' '){
                ++spa;
            }
            else if(item == '\t'){
                ++tab;

            }
        }
        ++ent;
    }

    cout<<"a\t"<<a<<endl;
    cout<<"e\t"<<e<<endl;
    cout<<"i\t"<<i<<endl;
    cout<<"o\t"<<o<<endl;
    cout<<"u\t"<<o<<endl;
    cout<<"ff\t"<<ff<<endl;
    cout<<"fl\t"<<fl<<endl;
    cout<<"fi\t"<<fi<<endl;
    cout<<"spa\t"<<spa<<endl;
    cout<<"tab\t"<<tab<<endl;
    cout<<"ent\t"<<ent<<endl;

    return 0;
}
