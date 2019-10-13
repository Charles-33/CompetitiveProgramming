#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits.h>


int main() {
    std::vector<int> res(1500);
    res[0] = 1;

    int i2, i3, i5;
    i2 = i3 = i5 = 0;
    int multiplyBy2 = res[i2] * 2;
    int multiplyBy3 = res[i3] * 3;
    int multiplyBy5 = res[i5] * 5;

    for( int i = 1; i < res.size(); i++ )
    {

        res[i] = std::min( multiplyBy2, std::min( multiplyBy3, multiplyBy5));
        if( res[i] == multiplyBy2  )
        {
            i2++;
            multiplyBy2 = res[i2] * 2;
        }
        if( res[i] == multiplyBy3 )
        {
            i3++;
            multiplyBy3 = res[i3] * 3;
        }
        if( res[i] == multiplyBy5 )
        {
            i5++;
            multiplyBy5 = res[i5] * 5;
        }
    }

    std::cout << "The 1500'th ugly number is " << res[1499] << "." << std::endl;

    return 0;
}