#include<bits/stdc++.h>
using namespace std;
int main(){
int a=13;
bool b=false;
for(int i=2;i*i<=a;i++){
    if(a%i==0){
       
       b=true;
       break;
    }
}
if(b){
cout<<"composite";
}else 
cout<<"prime";

return 0;
}