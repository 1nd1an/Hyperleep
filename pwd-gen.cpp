#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using std::cin;
using std::cout;
using std::string;

string pwdgen(int length){
    string password;
    string charset="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+";
    srand(time(0));
    for(int i=0;i<length;i++){
        int index = rand() % charset.length();
        password += charset[index];
    }
    return password;
}

int main(){
    int length;
    cout << "Password Generator"<<"\n";
    cout << "How long do you like it to be?"<<"\n";
    cin >> length;
    string pwd=pwdgen(length);
    cout << "Generated Password: " << pwd << "\n";
    return 0;
}