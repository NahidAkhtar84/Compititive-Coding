#include <bits/stdc++.h>
using namespace std;
//HOMEPAGE=====================================
class homepage
{
    public:
    void show(){
    cout<<"Now you can log in !"<<endl;
    }
};
//LOGIN=========================================
class login
{
    public:
    string name;
    int id;
    login()
    {
       cin>>name;
       cin>>id;
    }
};

//LOGOUT========================================

class logout
{
public:
     string Logout;
    logout()
    {
    cout<<"Please write 'Logout' to logout"<< endl;
    cin>>Logout;
    }
};

//STUDENT'S INFORMATION==========================
class studentInfo{
public:
    void Nahid()
    {
        cout<<"Full Name : Nahid Ibne Akhter"<<endl;
        cout<<"Roll Number : 84"<<endl;
        cout<<"Batch : BICT-17"<<endl;
        cout<<"Contact : 01*********"<<endl;
        cout<<"Address : Mirpur 10"<<endl;
        cout<<"Course taken: "<<endl;
    }

    void SZL()
    {
        cout<<"Full Name : Kh. Mohimenul Islam Shazol"<<endl;
        cout<<"Roll Number : 55"<<endl;
        cout<<"Batch : BICT-17"<<endl;
        cout<<"Contact : 01*********"<<endl;
        cout<<"Address : Mirpur DOHS"<<endl;
        cout<<"Course taken: "<<endl;
    }

    void Somrat()
    {
        cout<<"Full Name : Mahmudul Hassan "<<endl;
        cout<<"Roll Number : 76"<<endl;
        cout<<"Batch : BICT-17"<<endl;
        cout<<"Contact : 01*********"<<endl;
        cout<<"Address : Mirpur DOHS"<<endl;
        cout<<"Course taken: "<<endl;
    }

    void Murad()
    {
        cout<<"Full Name :Mahfuzur Rahman Murad"<<endl;
        cout<<"Roll Number : 75"<<endl;
        cout<<"Batch : BICT-17"<<endl;
        cout<<"Contact : 01*********"<<endl;
        cout<<"Address : Mirpur DOHS"<<endl;
        cout<<"Course taken: "<<endl;
    }

};
//FACULTI'S INFORMATION==========================

class facultyInfo{
public:
    void CP()
    {
        cout<<"Name : Mohammad Abu Yousuf"<<endl;
        cout<<"Associate Professor"<<endl;
        cout<<"IIT, Jahangirnagar University"<<endl;
        cout<<"Course : BICT-17"<<endl;
        cout<<"Course Name : Computer Programming (CP)"<<endl;
        cout<<"Contact Number : 01*********"<<endl;
        cout<<"Address : Dhaka"<<endl;
        cout<<"E-mail : someone@something.com"<<endl;
    }

    void EDC()
    {
        cout<<endl<<endl;
        cout<<"Name : Mahdia Tahsin"<<endl;
        cout<<"Lecturer"<<endl;
        cout<<"Institution : ICT, FST, BUP"<<endl;
        cout<<"Course : BICT-17"<<endl;
        cout<<"Course Name : EDC"<<endl;
        cout<<"Contact Number : 01*********"<<endl;
        cout<<"Address : Dhaka"<<endl;
        cout<<"E-mail : someone@something.com"<<endl;
    }

};

//COURSE NAME====================================

class coursename
{
public:
    string course;
    void courses(){
    cout<<"Enter the course name: "<< endl;
    cin>>course;
    }
};

//EVALUATION START==============================

//EVALUATION FOR CP==============================

class EvaluationForm
{
public:
    double Avg, Avg2;
    double n1, n2, n3, n4, n5, n6;
    double sum, sum2, sumTotal;
    void ExampleCP(){
    cout<<"Fill up the Evaluation form carefully"<<endl;
    cout<<" "<<endl;
    cout<<"\t\t\t Very good: 7 to 10\n \t\t\t Good: 5 to 7\n\t\t\t Not Satisfactory:  Below 5" << endl;
    cout<<"Question 1: *************"<<endl;
    cin>>n1;
    if(n1>10 || n1<1)
    {
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n1;
    }
    cout<<"Question 2: *************"<<endl;
    cin>>n2;
     if(n2>10 || n2<1)
    {
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n2;
    }
    cout<<"Question 3: *************"<<endl;
    cin>>n3;
     if(n3>10 || n3<1)
    {
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n3;
    }
    sum= n1+n2+n3;
    Avg=sum/3;
    cout<<"Average rating is " <<Avg<< " out of 10"<<endl;
    }

    //Passing the average rating & showing the output============
     void saveData()
    {
        double output;
        output=Avg;
        cout<<"1st student gave " <<output<< " out of 10"<<endl;
    }

    void ExampleEDC(){
    cout<<"Fill up the Evaluation form carefully"<<endl;
    cout<<" "<<endl;
    cout<<"\t\t\t Very good: 7 to 10\n \t\t\t Good: 5 to 7\n\t\t\t Not Satisfactory:  Below 5" << endl;
    cout<<"Question 1: *************"<<endl;
    if(n4>10 || n4<1)
    {
        cin>>n4;
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n4;
    }
    cout<<"Question 2: *************"<<endl;
    cin>>n5;
     if(n5>10 || n5<1)
    {
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n5;
    }
    cout<<"Question 3: *************"<<endl;
    cin>>n6;
     if(n6>10 || n6<1)
    {
        cout<<"Invalid input, Please Enter the Rating within 1 to 10"<< endl;
        cin>>n6;
    }
    sum2= n4+n5+n6;
    Avg2=sum2/3;
    cout<<"Average rating is " <<Avg2<< " out of 10"<<endl;
    }
    //Passing the average rating & showing the output===========
     void saveData2()
    {
        double output2;
        output2=Avg2;
        cout<<"2nd student gave  " <<output2<<" out of 10"<<endl;
    }

    //SHOWING TOTAL AVERAGE=================================

    void total()
    {
        double Total_Avg;
        sumTotal=(Avg+Avg2);
        Total_Avg=sumTotal/2;
        cout<<"Average Rating "<< Total_Avg<<endl;

    }


};

//class invalid_input

//MAIN FUNCTION STARTS===========================

int main()
{
    int i=1;
    int j=3;

        //SHOWING HOMEPAGE*********************************

        homepage ob;
        ob.show();

        //LOGIN FORM******************************************
        for(i=1; i<=3; i++)

        {
        login ob1;

        //SOWING STUDENT'S INFO******************************
        studentInfo ob2;
           if(ob1.name=="shazol" && ob1.id==55){
            ob2.SZL();
           }

           cout<<endl;
          if(ob1.name=="murad" && ob1.id==75){
            ob2.Murad();
           }

           cout<<endl;
           if(ob1.name=="hasan" && ob1.id==76){
            ob2.Somrat();
           }

           if(ob1.name=="nahid" && ob1.id==84){
            ob2.Nahid();
           }
           cout<<endl;

           //SHOWING FACULTY INFO****************************

           facultyInfo ob3;
           if(ob1.name=="AY" && ob1.id==01){
            ob3.CP();
            }
           cout<<endl;
            if(ob1.name=="MT" && ob1.id==02){
            ob3.EDC();
           }
           cout<<endl;

           //SELECTING COURSE*********************************

           coursename ob4;
           if(ob1.id==76 || ob1.id==55 || ob1.id==84 || ob1.id==75){
            ob4.courses();
           }

           if(ob4.course=="EDC"){
            ob3.EDC();
           }
           if(ob4.course=="CP"){
            ob3.CP();
           }

           //EVALUATING THE FACULTIES***********************

           EvaluationForm ob5;
            if(ob1.id==55  && ob4.course=="CP"){
                ob5.ExampleCP();
            }

             if((ob1.id==76 || ob1.id==84 || ob1.id==75) && ob4.course=="CP"){
                ob5.ExampleEDC();
            }
            /*else
            {
                cout<<"You can't Login twice"<<endl;
            }*/

            //FACULTIES WILL SEE THE OUTPUT HERE************

            if(ob1.name=="AY" && ob1.id==01){
                ob5.saveData();
                ob5.saveData2();
                ob5.total();
            }


          /*  if(ob1.name=="MT" && ob1.id==02){
                ob5.saveData2();
            }*/

              //LOGOUT********************************************
            logout ob6;
            if(ob6.Logout=="Logout"){
                ob.show();
            }

    }

    return 0;
}
