#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int h,m,s,a,err;
    err = 0;
    a = 0;
    cout<<"\n\n\tMY CLOCK"<<endl;

    while(err == 0){
        cout<<"\nSet Timing\n"<<endl;
        cout<<"Enter hour :";
        cin>>h;
        cout<<endl;
        cout<<"Enter minute :";
        cin>>m;
        cout<<endl;
        cout<<"Enter second :";
        cin>>s;
        cout<<endl;
        if(h<24 && m<60 && s<60){
        err++;
        } else 
        system("cls");
        cout<<"Wrong Format!!\nPlease set again.\n\n";
    }

    while(a==0){
        system("cls");
        cout<<"\n\n\tMY CLOCK"<<endl;
        cout<<"\n\n\tTiming is :-  ";
        cout<<h<<":"<<m<<":"<<s<<" ";
        Sleep(1000);
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>23){
            h=0;
        }
    }

return 0;
}
