//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>   //Created By XCode.++plus
#include <stdlib.h>   //www.xcodeplus.net
#include <windows.h>  //Compiler C++ W/CodeBlock

using namespace std;
 
 
int main(){
int i,j;

system("Color 0C");


for(i=1;i<=22;i++)
{         
		 for(j=1;j<=60;j++)
		 {
         if(i==1) if(((j>=14)&&(j<=23))||((j>=39)&&(j<=48))) cout<<"*"; else cout<<" ";
         else if(i==2) if(((j>=11)&&(j<=26))||((j>=36)&&(j<=51))) cout<<"*"; else cout<<" ";
         else if(i==3) if(((j>=9)&&(j<=28))||((j>=34)&&(j<=53))) cout<<"*"; else cout<<" ";
         else if(i==4) if(((j>=7)&&(j<=30))||((j>=32)&&(j<=55))) cout<<"*"; else cout<<" ";
         else if((i>=5)&&(i<=8)) if((j>=5)&&(j<=57)) cout<<"*"; else cout<<" ";
         else if(i==9)  if((j>=7)&&(j<=55))  cout<<"*"; else cout<<" ";
         
      }
      cout<<"\n";
   }
   return 0;
}
