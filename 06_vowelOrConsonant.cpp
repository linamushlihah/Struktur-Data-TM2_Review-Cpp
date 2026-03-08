#include <iostream>
using namespace std;

void vowelOrConsonant(char x){
    if (x == 'A' || x == 'a' || x == 'I' || x == 'i' ||
        x == 'U' || x == 'u' || x == 'E' || x == 'e' ||
        x == 'O' || x == 'o' )
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}
int main(){
    vowelOrConsonant('c');
    vowelOrConsonant('E');
    return 0;
}
