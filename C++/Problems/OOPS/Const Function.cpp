#include<bits/stdc++.h>
using namespace std;

class Book{
    string BookName;
    string authorName;
    public:
        Book(string bn, string an){
            BookName = bn;
            authorName = an;
        }
        
        string getBookName() const {
            return BookName;
        }
};

int main(){
    const Book b1("Hero","Hemanth");
    cout<<b1.getBookName();
}

// object's function is not changed->const function
// both obj and fun should be const
