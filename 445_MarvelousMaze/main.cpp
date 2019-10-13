#include <iostream>
#include <cstdlib>
#include <vector>
#include <stack>
#include <iostream>
#include <chrono>
#include <unistd.h>


int main(){
    auto start = std::chrono::steady_clock::now();
    std::string puzzle = "";
    int ttlPrint = 0;

    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\445_MarvelousMaze\\input.txt", "r", stdin);

//    std::vector<std::string> puzzles;
//
//    while( std::getline( std::cin, puzzle) )
//        puzzles.push_back( puzzle );
//
//    for( auto temp: puzzles ){
//
//        if( temp == "" ) {
//            std::cout << std::endl;
//            continue;
//        }
//
//        for( auto c: temp ){
//            if( c == 'b' ){
//                while( ttlPrint  ){
//                    std::cout << " ";
//                    ttlPrint--;
//                }
//            }
//            else if( c == '!' )
//                std::cout << std::endl;
//            else if( c == '\n' )
//                std::cout << std::endl;
//
//            else{
//                if( ( c - '0') >= 1 && ( c - '0' ) <= 9 )
//                    ttlPrint += ( c - '0' );
//                else{
//                    while( ttlPrint  ){
//                        std::cout << c;
//                        ttlPrint--;
//                    }
//                }
//            }
//        }
//        std::cout << std::endl;
////        std::cin.ignore();
//    }
    while( std::getline( std::cin, puzzle )){
        if( puzzle.length() == 0 )
        {
            std::cout << std::endl;
            continue;
        }
        for( auto c: puzzle ){
            if( c == 'b' ){
                while( ttlPrint  ){
                    std::cout << " ";
                    ttlPrint--;
                }
            }
            else if( c == '!' )
                std::cout << std::endl;
            else if( c == '\n' )
                std::cout << std::endl;
            else{
                if( ( c - '0') >= 1 && ( c - '0' ) <= 9 )
                    ttlPrint += ( c - '0' );
                else{
                    while( ttlPrint  ){
                        std::cout << c;
                        ttlPrint--;
                    }
                }
            }
        }
        std::cout << std::endl;
    }
    auto end = std::chrono::steady_clock::now();

    std::cout << "Elapsed time in nanoseconds : "
         << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
         << " ns" << std::endl;

    std::cout << "Elapsed time in microseconds : "
         << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
         << " µs" << std::endl;

    std::cout << "Elapsed time in milliseconds : "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
         << " ms" << std::endl;

    std::cout << "Elapsed time in seconds : "
         << std::chrono::duration_cast<std::chrono::seconds>(end - start).count()
         << " sec";

    return 0;
}