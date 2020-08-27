#include<iostream>
using namespace std;
int main()
{
    int T,i,j;
    int D,M,Y,QY,a,b=0;
    cin>>T;
    for(i=1;i<=T;i++)
    {
       cin>>D;
       if(D>0 && D<32)
       {
           cin>>M;
           if( (M==4 || M==6 || M==9 || M==11) && D==31){continue;}
           if(M>0 && M<12)
           {
               cin>>Y;
               if((Y%100 == 0 && M==2)&&(D==31 || D==30 || D==29)){continue;}
               if((Y%400 == 0 && M==2)&&(D==31 || D==30)){continue;}
               if(Y>=1850 && Y<=2016)
                {
                cin>>QY;
               if(QY>=Y && QY<=3000)
               {
                   if(Y%400==0 && M==2){
                    for(j=1;j<=(QY-Y);j++){
                        if(Y%400==0){b=b+1;}
                        Y=Y+1;
                    }
                    cout<<"Case "<<i<<":"<<b-1<<endl;
                   }
                   else{
                     a=QY-Y;
                  cout<<"Case "<<i<<":"<<a<<endl;
                      }

               }
               }
           }
       }
    }
}
