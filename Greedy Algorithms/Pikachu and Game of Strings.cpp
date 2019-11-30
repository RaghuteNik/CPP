/* Greedy Algorithm Problems (Program in C++ ) */
/* Pikachu and the Game of Strings  */
/* Finding minimun number of days for converting move "s" to stronger move "t". */

#include <iostream>
#include <vector>
using namespace std ;

int main()
{   

    vector <char> ar; 
    vector <char> ar2;
    
    int n;
    cin>>n;
    
    int count=0,h=0,h2=0,h1=0;
    char ch;
    
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        ar.push_back(ch);
    }
    
     for(int i=0;i<n;i++)
    {
        cin>>ch;
        ar2.push_back(ch);
    }
   
    
    for ( int i=0;i<n;i++)
    {  
        h2=(int ) ar2[i];
        h1=(int)ar[i] ;
        h=h2-h1;
    
        if(h<0) {
            
            h=26+h;
        
        }
    
        if (h>=13) {
        
            h=h-13;
            count=count+h+1;
        }
    
        else if (h<13){
            
          count=count+h;
          
        }
    
    }
    
    cout<<count;
    
    return 0;
    
}

