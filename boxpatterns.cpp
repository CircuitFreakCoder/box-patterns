#include <iostream>
#include <string>

using namespace std;

void box(int n,int m); // n by m box, n row, m col

void hallow_box(int n, int m);

void frame_str(string s);

int main()
{
    box(3,4);
    cout<<endl;
    hallow_box(3,6);
    cout<<endl;
    frame_str("Jorick A. Caberio");
    return 0;
}

void frame_str(string s)
{
    string one (s.length()+4, 'X');
    string spaces (s.length()+2,' ');
    string second = "X"+spaces+"X";
    string msg = "X "+s+" X";

    cout<<one<<endl;
    cout<<second<<endl;
    cout<<msg<<endl;
    cout<<second<<endl;
    cout<<one<<endl;
}

void hallow_box(int n, int m)
{
    for(int row=0; row<n; row++)
    {
        for(int col= 0; col<m; col++)
        {
            cout<< (((row==0||row==n-1)||(col==0||col==m-1))?"X":" ");
        }
        cout<<endl;
    }

}

void box(int n, int m)
{
    for(int row=0; row<n; row++)
    {
        for(int col= 0; col<m; col++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
}
