#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main()
{
    int r1, r2, l1, l2, l3, l4;
    int sum1 = 0, sum2 = 0;
    int p1score, p2score,p1exscore, p2exscore;
    int total1 = 0;
    int total2 = 0;
    int k,g,e,f,a,l,h;
    int d1p1, d2p1;
    int d1p2, d2p2;
    int total1ex,total2ex;
    int roundtotal1,roundtotal2;

    // string p1name, p2name;
    char p1name, p2name;
    char p1namel, p2namel;
    bool x=true;

    cout<<"PLAYER 1 please enter your Full NAME :"<<endl;
    while(true)
    {
    p1name = cin.get();
    if(p1name == '\n')
    {  
    break;
    }                             //What thia actually does is that it takes the whole name
    p1namel = int(p1name);       //As input but stores only the last charcter that was input by user before pressing enter 
    }
    cout<<p1namel<<endl;
    // getline(cin, p1name, '\n');
    
    cout<<"PLAYER 2 please enter your Full NAME :"<<endl;
    while(true)
    {
    p2name = cin.get();
    if(p2name=='\n')
    {
    break;
    }                
    p2namel = int(p2name);       
    }
    cout<<p2namel<<endl;
    // getline(cin, p2name, '\n');

    cout<<"PLAYER 1 please enter your ROLL NUMBER :"<<endl;
    cin>>r1;

    cout<<"PLAYER 2 please enter your ROLL NUMBER :"<<endl;
    cin>>r2;

        l1 = r1 % 10;
        r1 = r1 / 10;
        l2 = r1 % 10;

        sum1 = l1 + l2;

        l3 = r2 % 10;
        r2 = r2 / 10;
        l4 = r2 % 10;

        sum2 = l3 + l4;

    int b = time(0);                 
    srand(b);

    cout<<"For PLAYER 1"<<endl;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=1; j++)
        {
            d1p1 = ((rand() % 6) + 1);
            cout<<"Dice 1 :"<<d1p1<<endl;
            d2p1 = ((rand() % 6) + 1);
            cout<<"Dice 2 :"<<d2p1<<endl;

            a = d1p1 + d2p1;
            total1 = total1 + a;
            cout<<total1<<endl;

            if(a == sum1)
            {
                int n = l1;
                total1 = total1 + n;
            }

        {

        int m;
        if(p1namel>=97)
        {
            m = p1namel - 96;
        }
        else
        {
            m = p1namel - 64;
        }

        if(a == m)
        {
            total1 = total1 + 5;
        }
        }

        if(d1p1 == d2p1)
        {
            if(((a*a)-(4*a))==0)
            {
            cout<<"Congrats You get another chance"<<endl;
            d1p1 = ((rand() % 6) + 1);
            cout<<"Extra Dice 1 :"<<d1p1<<endl;
            d2p1 = ((rand() % 6) + 1);
            cout<<"Extra Dice 2 :"<<d2p1<<endl;
            total1ex = d1p1 + d2p1;
            total1 = total1 + total1ex;
            if(total1ex==sum1)
            {
                total1 = total1 + l1;
            }
            cout<<total1<<endl;
            }
        }
        }
    }
    cout<<"Total of 1st PLAYER is : "<<total1<<endl;
    cout<<"PLAYER 1 Round End"<<endl;
    cout<<endl;



    cout<<"For PLAYER 2"<<endl;
     for(int q=1; q<=5; q++)
    {
        for(int w=1; w<=1; w++)
        {
            d1p2 = ((rand() % 6) + 1);
            cout<<"Dice 1 :"<<d1p2<<endl;
            d2p2 = ((rand() % 6) + 1);
            cout<<"Dice 2 :"<<d2p2<<endl;

            h = d1p2 + d2p2;
            total2 = total2 + h;
            cout<<total2<<endl;

            if(h == sum2)
            {
                int y = l1;
                total2 = total2 + y;
            }

        {


        int de;
        if(p2namel>=97)
        {
            de = p2namel - 96;
        }
        else
        {
            de = p2namel - 64;
        }

        if(h == de)
        {
            total2 = total2 + 5;
        }
        }

        if(d1p2 == d2p2)
        {
            if(((h*h)-(4*h))==0)
            {
            cout<<"Congrats You get another chance"<<endl;
            d1p2 = ((rand() % 6) + 1);
            cout<<"Extra Dice 1 :"<<d1p1<<endl;
            d2p2 = ((rand() % 6) + 1);
            cout<<"Extra Dice 1 :"<<d2p2<<endl;
            total2ex = d1p2 + d2p2;
            total2 = total2 + total2ex;
            cout<<total2<<endl;
            }
        }
        }
    }
    cout<<"Total of 2nd PLAYER is : "<<total2<<endl;
    cout<<"PLAYER 2 Round Ends"<<endl;
    cout<<endl;


    if(total1>total2)
    {
        cout<<"Congrats PLAYER 1 Wins"<<endl;
    }
    else if (total1<total2)
    {
        cout<<"Congrats PLAYER 2 Wins"<<endl;
    }
    else
    {
        if(total1==total2)
        {
            {
            do
            {
                d1p1 = ((rand() % 6) + 1);
                cout<<"PLAYER 1's single chance : "<<d1p1<<endl;
                d1p2 = ((rand() % 6) + 1);
                cout<<"PLAYER 2's single chance : "<<d1p2<<endl;

            }while(d1p1 == d1p2);
            
            if(d1p1>d1p2)
            {
                cout<<"Congrats PLAYER 1 Wins"<<endl;
            }
            else
            {
                cout<<"Congrats PLAYER 2 Wins"<<endl;
            }
        }
    }
    }

return 0;
}