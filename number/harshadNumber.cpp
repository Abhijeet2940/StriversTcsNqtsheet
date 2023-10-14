#include<bits/stdc++.h>
using namespace std;
int main(){
int n=379;
int sum=0;
int c=n;
while(n!=0){
int b=n%10;
sum=sum+b;
n=n/10;
}
if(c%sum==0){
    cout<<"yes";
}else{
    cout<<"no";
}

return 0;
}