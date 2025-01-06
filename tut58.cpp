#include<iostream>
#include<cstring>
using namespace std;


class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display() = 0;  // do-nothing function   --> pure virtual function 
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s,r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is a amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of video is "<<videoLength<<" minutes"<<endl;
        }
};


class CWHWords : public CWH{
    int words;
    public:
        CWHWords(string s, float r, int wc): CWH(s,r){
            words = wc;
        }

         void display(){
            cout<<"This is a amazing text tutorial  "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is :"<<words<<" words"<<endl;
        }
};

int main(){

    string title;
    float rating , vlen;

    int words;
    // for code with harry video

    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();

    // for code with harry words
    title = "Django tutorial Text";
    words = 456;
    rating = 4.19;

    CWHWords djWords(title, rating, words);
   // djWords.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djWords;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}


/*Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class*/