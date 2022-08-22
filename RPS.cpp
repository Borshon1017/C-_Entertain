#include <iostream>
using namespace std;
string ns, cs;

string whatdidyouchoose(int n)
{
    if (n==1)
    {
    ns= "Rock";
    return ns;
    }
    else if (n==2)
    {
    ns= "Paper";
    return ns;
    }
    else if (n==3)
    {ns="Scissor";
    return ns;}
    return ns;
}


int main()
{
    start:
    int CPU;
    CPU = rand() % 10 +1;
    int x;
    bool in=0;
    int r=1,p=2,s=3;
    
    
    
     if (CPU>=0 && CPU<=3)
     {
         CPU=r;
     }
     else if (CPU>=4 && CPU<=7)
     {
         CPU=p;
     }
     else if (CPU>=8 && CPU<=9)
     {
         CPU=s;
     }
 
    cout<<"================================================================"<<endl;
    cout<<"Choose: "<<endl;
    cout<<"1. Rock "<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cout<<"================================================================"<<endl;

    cin>>x;
   cout<<"Your Move: "<<whatdidyouchoose(x)<<"  \t CPU's Move: "<<whatdidyouchoose(CPU)<<endl;
         if (x==r && CPU==r || x==p && CPU==p || x==s && CPU==s )
     {
         
         cout<<"tie"<<endl;
         cout<<endl;
         in=1;
     }
     else if (x==p && CPU==r || x==s && CPU==p || x==r && CPU==s )
     {
       cout<<"you Win"<<endl;
       cout<<endl;
       in=1;
     }
     else if (x==r && CPU==p || x==p && CPU==s || x==s && CPU==r )
     {
         cout<<"you Loose"<<endl;
         cout<<endl;
         in=1;
     }
     else
     {
         cout<<"===== Game Over ====="<<endl;
         cout<<endl;
     }
    if (in==1)
    {
    goto start;
    }
}