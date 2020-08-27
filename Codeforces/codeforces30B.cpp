#include<iostream>
using namespace std;
int main(){
int year,month,datelength,fyear;
int ndate1,nmonth1,nyear1,ndate2,nmonth2,nyear2;
char dot;
int res;
for(int i=1;i<3;i++){
cin>>datelength;
cin>>dot;
int date[]={31,28,31,30,31,30,31,31,30,31,30,31} ;
cin>>month;
cin>>dot;
if(month>=1 && month<=12){
    cin>>year;
    fyear=year+2000;
    if(((fyear % 4 == 0) && (fyear % 100 != 0)) ||(fyear%400==0)){
            date[1]=29;
         }
    if(date[month-1]<datelength){
        return 0;
    }
    if(year>=1 && year<=99){


        if(i==1){
         ndate1=datelength;
         nmonth1=month;
         nyear1=year;
    }
        if(i==2){
         ndate2=datelength;
         nmonth2=month;
         nyear2 =year;
    }


    }
}
}

if(((ndate1>=ndate2)&&(nmonth1>=nmonth2))||((ndate1<ndate2) &&(nmonth1>=nmonth2)) ){
    res=nyear1-nyear2;
}
else if(((ndate1<ndate2)&&(nmonth1<nmonth2)) ||((ndate1>=ndate2)&&(nmonth1<nmonth2))){
     res = nyear1-(nyear2+1);
}
else if(nyear1<nyear2){
    res=nyear1-nyear2;
}
if(res>=18){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;

}
