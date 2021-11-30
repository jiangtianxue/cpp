#include <iostream>
#include <iomanip>
using namespace std;

int gcd(int n1, int n2);
bool isPrime(int number);
void printPrimeNumbers(int numberOfPrimes);
int max(int n1, int n2);
double max(double n1, double n2);

int main(){
    cout << "enter first number: ";
    int n1; 
    cin >> n1;

    cout << "enter second number: ";
    int n2;
    cin >> n2;

    cout << "the greatest common division for " << n1 
        << " and " << n2 << " is " << gcd(n1, n2) << endl;

    cout << endl;

    int numberOfPrimes = 50;
    cout << "the first " << numberOfPrimes << " primes are " << endl;
    printPrimeNumbers(numberOfPrimes);

    cout << endl;

    cout << "the lager number is " << max(3, 4) << endl;
    cout << "the lager number is " << max(3.2, 5.4) << endl;
    
    return 0;
}

int gcd (int n1, int n2){
    int gcd = 1;
    int k = 2;

    while (k <= n1 && k <= n2)
    {
        if (n1 % k == 0 && n2 % k == 0){
            gcd = k;
        }
        k++;
    }
    
    return gcd;
}

bool isPrime(int number){
    for (int divisor = 2; divisor <= number / 2; divisor++){
        if (number % divisor == 0){
            return false;
        }
    }

    return true;
}

void printPrimeNumbers(int numberOfPrimes){
    const int NUMBER_OF_PRIMES_PER_LINE = 10;
    int count = 0;
    int number = 2;

    while (count < numberOfPrimes)
    {
        if (isPrime(number)){
            count++;
            if (count % NUMBER_OF_PRIMES_PER_LINE == 0){
                cout << setw(4) << number << endl;
            }
            else{
                cout << setw(4) << number;
            }
            
        }
        number++;
    }
    
}


/*  函数重载，相同任务，不同类型参数的函数应该具有相同的名字
    下面两个函数就是函数的重载    */
int max(int n1, int n2){
    if (n1 > n2)
        return n1;
    else    
        return n2;
}

double max(double n1, double n2){
    if (n1 > n2)
        return n1;
    else    
        return n2;
}