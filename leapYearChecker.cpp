#include <iostream>
using namespace std;
int main(){
    int yearToCheck;
    cout<< "Enter Year to check"<<endl;
    cin >>yearToCheck;
    if (yearToCheck%400 == 0 || yearToCheck%4 == 0 && yearToCheck%100 !=0)
    {
        /* code */
        cout<<yearToCheck<<" Year is a leap year";
    }
    else {

        cout<<yearToCheck<<" Year is not a leap year";
    }
}
