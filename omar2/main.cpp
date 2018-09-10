#include<iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n;
cin>>n;
int x[n],m=INT_MIN,y;
for (int i=0;i<n;i++){
    cin>>x[i];
}
for (int i=0;i<n;i++){
    y=sqrt(x[i]);
    if((y*y!=x[i]) || isnan(y)){
        if(x[i]>m){
            m=x[i];
        }
    }
}
cout << m;
return 0;
}
