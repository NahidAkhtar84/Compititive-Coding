
//Shakil
#include<stdio.h>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>

using namespace std;
int ac(int a){
    if (a < 0)
       {
          a = -a;
          return a;
       }
    else
        return a;
}
int main() {

int dd,mm,yy,bd,bm,by,ded,dm,dy,pp;
char dot;

cin >> dd >> dot >> mm >> dot >> yy;
cin >> bd >> dot >> bm >> dot >> by;

ded = dd - bd;
dm = mm - bm;
dy = yy - by;

    pp = ded+dm+dy;

        if(pp >= 18){
        cout << "YES" << endl;
        } else cout << "NO" << endl;
}
