#include<iostream>
using namespace std;

int main(){
    int x,E=0,O=0,i=0;
    while(x!=0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x%2==0 and x!=0){
            E++;
        }
        else if(x!=0){
            O++;
        }
        i++;
    }
    cout << "#Even numbers = " << E << endl;
    cout << "#Odd numbers = " << O;
    return 0;
}
