#include<bits/stdc++.h>
using namespace std;
int sum(int a){
    int b=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
          b+=i;
        }
    }
    return b;
}
int main(){
int a=21;
int b=sum(a);
if(a<b){
    cout<<"abunant";
}else{
    cout<<"not abudant";
}
return 0;
}