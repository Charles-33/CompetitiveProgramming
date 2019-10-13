#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>


int main(){
    int cases = 0;
    int amp = 0;
    int freq = 0;
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\488_TriangleWave\\input.txt", "r", stdin);

    scanf("%d", &cases);

    while( cases-- ){
        std::cin.ignore();
        scanf( "%d\n%d", &amp, &freq );
        while( freq-- ){
            int i = 1;
            for( i ; i <= amp; i++ ){
                for( int x = 0; x < i; x++ )
                    std::cout << i << "";
                std::cout << std::endl;
            }

            for( i = amp - 1; i > 0; i-- ){
                for( int x = 0; x < i; x++ )
                    std::cout << i << "";
                std::cout << std::endl;
            }
            if( cases == 0 && freq == 0)
                break;
            std::cout << std::endl;
        }
    }
    return 0;
}