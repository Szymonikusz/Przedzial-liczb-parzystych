#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Podaj podstawe potegi: ";
    cin>>a;
    cout<<"Podaj wykladnik potegi: ";
    cin>>b;
    c=1;
    for (int i=0;i<b;i++){
        c*=a;
    }
    cout<<"Twoj wynik to: "<<c<<endl;
}
