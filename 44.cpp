// call by Value 

#include<iostream>
using namespace std;

void swap(int m, int n){
    int temp;
    temp = m;
    m = n;
    n = temp;
    cout<<m<<" "<<n<<" ";
}

int main(){
    int x, y;
    cout<<"Enter Two numbers ";
    cin>>x>>y;

    cout<<"Value of x and y before calling function \n";
    cout<<x<<" "<<y<<endl;

    swap(x,y);
    cout<<endl;
    cout<<"Values after swapping\n";
    cout<<x<<" "<<y<<" ";
    

    return 0;
}
