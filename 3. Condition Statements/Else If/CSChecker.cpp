#include <iostream>
using namespace std;

int main (){
    char ch;

    cout << "Enter the Charactor :" ;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Lower Case Charactor";
    }else{
        cout << " Upper Case Charactor";
    }
}