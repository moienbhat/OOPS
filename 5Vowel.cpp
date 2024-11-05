#include<iostream>
using namespace std;
int main(){
char x;
cout<<"Enter Alphabet \n";
cin>>x;

if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
  cout<<"Letter is Vowel ";
}

else{
  cout<<"Letter is not vowel ";
}

  return 0;
}