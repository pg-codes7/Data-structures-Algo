#include <iostream>
using namespace std;

int fibonacciNums(int n){
    if (n == 1 || n == 0){
        return n;
    }
   return fibonacciNums(n-1)+ fibonacciNums(n-2);
}

int main(){

  int n;
  cout<< "Enter the number "<< endl;
  cin>> n;
  cout<<fibonacciNums(n);

return 0;
}



