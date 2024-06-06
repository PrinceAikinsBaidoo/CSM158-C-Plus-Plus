# include <iostream>
using namespace std;
int main(){
    int num_of_fib;
    int num1 = 0;
    int num2 = 1;

    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> num_of_fib;

    int arr[num_of_fib];
    arr[0]= 0;
    arr[1] = 1;
    
    for (int i = 2; i <= num_of_fib; i++){
        num2 = (num1 + num2);
        num1 = num2 - num1;
        arr[i] = num2; 
    }

    for (int j : arr){
        cout << j << "\n";
    }

    return 0;
}