#include <iostream>

using namespace std;

int main() {
    char num;
    
    
    char two[4][4]={   {'0','0','0','0'},{'0','0','0','0'} ,{'0','0','0','0'}, {'0','0','K','0'}    };
    update:
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<two[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    cout<<"enter move: "<<endl;
    cin>>num;
    cout<<endl;
      
    if (num=='w')
    {
        
         for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if (two[i][j]=='K')
            {
               two[i][j]='0';
               two[i-1][j]='K';
               
            break;
        }
        
    }
    }
    }
    else if (num=='s')
    {
        for (int i=0;i<4;i++)
        {
         for (int j=0;j<4;j++)
        {
            if (two[i][j]=='K')
            {
               two[i][j]='0';
               i++;
               two[i][j]='K';
               
            break;
        }
        
    }
        }
    }
    else if (num=='a')
    {
        for (int i=0;i<4;i++)
        {
         for (int j=0;j<4;j++)
        {
            if (two[i][j]=='K')
            {
               two[i][j]='0';
               two[i][j-1]='K';
               
            break;
        }
        
    }
        }
    }
    
    else if (num=='d')
    {
        for (int i=0;i<4;i++)
        {
         for (int j=0;j<4;j++)
        {
            if (two[i][j]=='K')
            {
               two[i][j]='0';
               two[i][j+1]='K';
               
            break;
        }
        }
        
    }
    }
    else
    {
        cout<<"didnt match"<<endl;
    }
    
    goto update;
}
