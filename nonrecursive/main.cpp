  #include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int lengthofstring(string s){
    int counter=0,i=0;
 while(s[i]){counter++;i++;}
 return counter;
}
bool balance(string s){

     char ch1,ch2;
    int c=0;
    int c1=0,c2=0,sizes;

   ch1=s[0];
   for(int i=1;i<lengthofstring(s);i++){
    if(ch1!=s[i]&&ch2!=s[i]){c++;ch2=s[i];}
    if(c>1||c==0){return false;}
   }
   for(int i=0;i<lengthofstring(s);i++){
    if(ch1==s[i]){c1++;}
    if(ch2==s[i]){c2++;}

   }
   if(c2!=c1){return false;}
return true;
}



int main()
{   string s1,s2;


    int sizee=0;
   cin>>s1;

for(int i=0;i<lengthofstring(s1);i++){
        s2+=s1[i];
    for(int j=i+1;j<lengthofstring(s1);j++){
        s2+=s1[j];
        if(balance(s2)){
        if(lengthofstring(s2)>sizee){sizee=lengthofstring(s2);}}
    }
  s2="";
}
cout<<"The size of the longest balanced substring: "<<sizee<<endl;
    return 0;
}
