#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter age of a user:";
    cin>>n;
    if (n < 18) {
        cout << "You are not eligible for voting";
    } else {
        cout << "You are eligible for voting";
    }
    return 0;
}
