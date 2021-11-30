#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*  使用蒙特卡洛模拟获得pi的近似值  
    蒙特卡洛使用随机数和概率来解决问题  */
int main(){
    const int  NUMBER_OF_TRIALS = 100000000;
    int numberOfHits = 0;
    srand(time(0));

    for (int i = 0; i < NUMBER_OF_TRIALS; i++){
        /*  使得x, y取值可以从-1到+1    */
        double x = rand() * 2.0 /RAND_MAX - 1;
        double y = rand() * 2.0 /RAND_MAX - 1;
        if (x * x + y * y <= 1)
            numberOfHits++;
    }
    double pi = 4.0 * numberOfHits / NUMBER_OF_TRIALS;
    cout << "pi is " << pi << endl;

    return 0;
}