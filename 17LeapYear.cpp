#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter year "<<endl;
cin>>n;

if(n%4==0 && n%100!=0 || n%400==0){
  cout<<"It is a leap year ";
}

else{
  cout<<"It is not a Leap Year ";
}

  return 0;
}


