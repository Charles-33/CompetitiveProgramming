#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::string input = "";
    int n = 0;
    int val = 0;

    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\10038_JollyJumpers\\input.txt", "r", stdin);

    while( std::getline( std::cin, input) ){
        std::istringstream iss(input);
        iss >> n;
        std::vector<bool> neededValues(n, false);
        std::vector<int> values(n);
        neededValues[0] = true;

        bool terminate = false;

        for( int i = 0; i < n; i++ ){
            iss >> values[i];
        }

        // calculates the difference between successive numbers, exits if the number can't exists, else
        // changes the corresponding value in the boolean vector to true
        for( int i = 0; i < n - 1; i++ ){
            int curr = std::abs(values[i] - values[i+1]);
            if(  curr >= n ){
                terminate = true;
                break;
            }
            else
                neededValues[curr] = true;
        }

        if( !terminate ){
            // checks if any value of the boolean vector is false, if one is false then the necessary values
            // were not found in the given set of integers
            for( bool i: neededValues ){
                if( !i ){
                    terminate = true;
                    break;
                }
            }
        }

        if( terminate )
            std::cout << "Not jolly";
        else
            std::cout << "Jolly";

        std::cout << std::endl;
    }

    return 0;
}