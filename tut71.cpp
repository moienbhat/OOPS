#include<iostream>
#include<vector>
using namespace std;
template <class T>

void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i  <v.size(); i++){
        cout<<v[i]<< " ";
        cout<<v.at(i)<< " ";

    }

    cout<<endl;

}
    
int main(){
    vector<int> vec1;    // zero lemgth integer vector
    vector<char>vec2(4);
    vector<char>vec3(vec2);

    // vec2.push_back('5');

    // display(vec2);
    
    display(vec3);
    
    // int element, size;
    // cout<<"Enter size of yuor vector "<<endl;
    // cin>>size;
    // for(int i = 0; i<size;i++){
    //     cout<<"Enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();  // last element removed
    
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,4, 566);
    // display(vec1);

    vector<int> vec4(4, 13);
    display(vec4);

    return 0;
}