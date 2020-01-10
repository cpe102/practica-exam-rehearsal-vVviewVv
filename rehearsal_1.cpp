#include <iostream>
using namespace std;

int main() {
    string name;
    float G;


    cout << "what is your name?:";
    cin >> name;
    cout << "what is your GPA?:";
    cin >> G;

    if(G < 3.50){
        cout << "Try harder, " << name << "!!!";
    }else{
        cout << name << " Inw Jrim Jrim!!!";
    }


 return 0;

}
