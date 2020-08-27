#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=0;i<1000;i++)
    {
        int sr,sc,dr,dc;
        cin>>sr>>sc>>dr>>dc;
        if(sr==0 && sc==0 && dr==0 && dc==0){
            break;
        }
       for(;;){
            if(sc==dc && sr==dr){
                break;
            }
        if(sr%2!=0)
        {
            if((sc%2!=0)&&(sr<dr) ){
                if(sc!=dc){
                    sr++;
                    sum++;
                }
            }
            else if((sc%2!=0)&&(sr>dr)){

                if(sc!=dc){
                sr--;
                sum++;
                }
            }
            else if((sc%2!=0) && (sr==dr)){
                if(sc<dc){
                    sc++;
                    sum++;
                }
                else if(sc>dc){
                    sc--;
                    sum++;
                }

            }
            else if(sc%2==0){
                if(sc<dc){
                sc++;
                sum++;

                }
                else if(sc>dc){
                    sc--;
                    sum++;

                }

            }
            cout<<sum<<endl;

        }

    }
    }

}
