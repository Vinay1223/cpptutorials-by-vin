#include<iostream>
#include<string>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){  /// a constructor which invokes automatically if a object is created of its class
            title = s;
            rating = r;
        }
        
        // void display(){
         virtual void display(){
            cout << "hello" <<endl;
         }   ///if virtual is not here then this display function will be executed twice since we called it twice that means here with the virtual it is under run time polymorphism
};

class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo (string s,float r,float vl) : CWH(s,r){   ////inheritance of a constructor in derived class from baseclass 
            videoLength = vl;
        }
        void display(){
            cout << "This is an amazing video with title "<< title << endl;
            cout << "Ratings : "<< rating << " out of 5 stars "<<endl;
            cout << "Length of this video is : " << videoLength << " minutes" <<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public: 
        CWHText(string s, float r, int wc) : CWH(s,r){
            words = wc;
        }
        void display(){
            cout << "This is an amazing text tutorial with title " << title << endl;
            cout << "Ratings of this text tutorial: " << rating << " out of 5 stars " << endl;
            cout << "No. of words in this text tutorial is : " << words << "words " << endl;
        }
};
int main() {
    string title;
    float rating,vlen;
    int words;

    title = "Django tutorial";
    vlen  = 4.56;
    rating = 4.89;
    CWHVideo djVideo (title, rating , vlen);
    

    title = "Django tutorial Text";
   words  = 445;
    rating = 4.6;
    CWHText djText (title, rating , words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0] ->display();
    tuts[1] ->display();

    return 0;
}
