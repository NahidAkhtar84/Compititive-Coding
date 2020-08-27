#include<bits/stdc++.h>
using namespace std;
int ascendingOrderFactory(int tn)
{
    int n,digit,temp,tn1=0, min1 =0;
    n = tn;
    for (digit=0;digit<=9;digit++){
    for (temp=n;temp>0;temp/=10){
     if (temp%10==digit){
                tn1 = tn1*10 +digit;
                //cout<<"tn1: "<<tn1<<endl;
            }
        }
    }
   return tn1;
}

int descendingOrderFactory(int n){
    int reverse=0, rem;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 //cout<<"Reversed Number: "<<reverse<<endl;
return reverse;
}
int main()
{
    int m, s;
    cin>>m>>s;
    int d = m/2;
    int feven =1, fh, lh, tn, ascn, descn, greatest =0;
    long long smallest = 1000000000;
    if(m%2 == 0){
        for(int i =1;i<d;i++){
            feven = feven * 10;
        }
 /*       if(d == 1){
            feven =0;
        }*/
        fh = feven+1;
        //lh = s - feven;
        for(;;){
        cout<<"fh: "<<fh<<endl;
         lh = s - fh;
         cout<<"lh: "<<lh<<endl;
         if(fh > lh){
                cout<<"Mal"<<endl;
            break;
         }
         if(fh%10 != 0 && lh%10 != 0){
            tn = fh*(feven * feven) + lh;
            //cout<<"tn: "<<tn<<endl;
            // The Number has to be sent to the ascending order factory
            ascn = ascendingOrderFactory(tn);
            //cout<<"ascn: "<<ascn<<endl;
            // Now its time to send ascending ordered number to the descending order factory
            descn = descendingOrderFactory(ascn);
            //cout<<"descn: "<<descn<<endl;
            // Now send the ascending and descending ordered number to compare if it is the smallest and the greatest
            if(descn > greatest && ascn < smallest){
                greatest = descn;
                smallest = ascn;
            }
         }
         fh++;
        }
        cout<<smallest<<endl;
        cout<<greatest<<endl;
    }
}
