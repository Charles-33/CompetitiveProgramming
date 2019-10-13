#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>

int main() {

    int a, b;
    while(( scanf( "%d%d", &a, &b ) )== 2 )
    {
        std::cout << a * ( b * 2 ) << std::endl;
    }

    return 0;
}