#include <iostream>
using namespace std;
int main(){
    char ls[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i <5; i++){
        for (int j = 0; j <5; j++){
            cout << "{" << ls[i] << ", " << ls[j] << "}, ";
        }
    }
    return 0;
}