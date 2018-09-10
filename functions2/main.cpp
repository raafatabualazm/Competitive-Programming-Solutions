#include <iostream>
#include <string>
using namespace std;

 int main()
 {
    string x="At:www.google.com";
    int colonPos=x.find(':');
    string prefix=x.substr(0,colonPos);
    string suffix = x. substr(colonPos+1);
    cout<<"You can search at "<<suffix<<endl;
}
