#include<iostream>
using namespace std;
int main()
{
    char c;

    cout<<endl;
    cout<<"   A   for   Adventure movies"<<endl;
    cout<<"   C   for   Comedy movies"<<endl;
    cout<<"   F   for   Family movies"<<endl;
    cout<<"   H   for   Horror movies"<<endl;
    cout<<"   S   for   Science Fiction movies"<<endl;
    cout<<endl;
    cout<<"Type any chracter to watch any movies>> ";

    cin>>c;
    if(c=='A')
        cout<<"Adventure Movies";
    else if(c=='C')
        cout<<"Comedy Movies";
    else if(c=='F')
        cout<<"Family Movies";
    else if(c=='H')
        cout<<"Horror Movies";
    else if(c=='S')
        cout<<"Science Fiction Movies";
    else
        cout<<"Invalid Chracter";


    return 0;
}
