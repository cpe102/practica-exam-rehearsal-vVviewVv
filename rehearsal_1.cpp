#include <iostream>
using namespace std;

int main() {
    string name;
    float G;


    cout << "What is your name?:";
    cin >> name;
    cout << "What is your GPA?:";
    cin >> G;

    if(G < 3.50){
        cout << "Try harder, " << name << "!!!";
    }else{
        cout << name << " Inw Jrim Jrim!!!";
    }


 return 0;

}
