#include<bits/stdc++.h>
using namespace std;
int main(){
int a=153;
int count=0;
int c=a;
int d=a;

while(c!=0){
    
    count++;
    c=c/10;
}

int sum=0;
while(a!=0){
    int b=a%10;
    sum=sum+pow(b,count);
    a=a/10;
     
}
cout<<sum;

if(sum==d){
    cout<<"yes";
}else
cout<<"no";

return 0;
 }
//int originalno = n;
//     int count = 0;
//     int temp = n;
//     while (temp != 0)
//     {
//         count++;
//         temp = temp / 10;
//     }
//     int sumofpower = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         sumofpower += pow(digit,count);
//         n /= 10;
//     }
//     return (sumofpower == orig