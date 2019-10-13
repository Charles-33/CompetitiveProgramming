#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>
#include <iomanip>

int main() {
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\10300_EcologicalPremium\\input.txt", "r", stdin);

    int numTestCases;
    int numFarmers;
    int farm, animals, enviro;

    double total;

    scanf("%d", &numTestCases);
    while( numTestCases-- )
    {
        total = 0.0;
        scanf( "%d", &numFarmers );
        while( numFarmers-- && scanf( "%d%d%d", &farm, &animals, &enviro ) == 3 )
        {
//            total += (animals * ((farm / (double) animals) * enviro));
                total = farm * enviro;
        }
        std::cout << std::fixed << std::setprecision(0) <<  total << std::endl;
    }

    return 0;

//    for (int i = 0; i < numTestCases; i++)
//    {
//        total = 0;
//        scanf( "%d", &numFarmers );
//        for( int x = 0; x < numFarmers; x++ )
//        {
//            scanf( "%d%d%d", &farm, &animals, &enviro );
//            total += (animals * ((farm / (double) animals) * enviro));
//        }
//        std::cout << std::fixed << std::setprecision(0) <<  total << std::endl;
//
//    }
//    return 0;
}