#include <iostream>
using namespace std;

string compress(string a){
    string word;
    int i = 0;
    int N = 0;
    while(i < a.size()){
        if(i == N){
            word += a[i];
             i++;
            N += 3;
        }else{
            i++;
        }
        
    }
    return word;
}
    
int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
