#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

int main( ){

    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\414_MachinedSurfaces\\input.txt", "r", stdin);

//    int n = 0;
//
//    while( scanf( "%d\n", &n ) == 1 && n )


    int n = 0;
    scanf("%d\n", &n );
    do{
        int maxX = 0;
        int ttlVoid = 0;

        std::vector<int> xCount( n );
        while( n-- )
        {
           std::string temp = "";
           std::getline( std::cin, temp );
           for( int i = 0; i < 25; i++)
           {
               if( temp[i] == 'X')
                   xCount[n]++;

           }
           maxX = std::max( xCount[n], maxX);
        }

        for( auto x: xCount )
            ttlVoid += ( maxX - x );

        std::cout << ttlVoid << std::endl;
        scanf("%d\n", &n );
    } while( n != 0 );
    return 0;
}