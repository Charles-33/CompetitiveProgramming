#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <algorithm>
#include <unordered_map>

int main() {
    std::string res = "";

    std::unordered_map<char, char> rev;
    rev['E'] = '3';
    rev['J'] = 'L';
    rev['L'] = 'J';
    rev['S'] = '2';
    rev['Z'] = '5';
    rev['5'] = 'Z';
    rev['2'] = 'S';
    rev['3'] = 'E';
    rev['A'] = 'A';
    rev['H'] = 'H';
    rev['I'] = 'I';
    rev['M'] = 'M';
    rev['O'] = 'O';
    rev['T'] = 'T';
    rev['U'] = 'U';
    rev['V'] = 'V';
    rev['W'] = 'W';
    rev['X'] = 'X';
    rev['Y'] = 'Y';
    rev['1'] = '1';
    rev['8'] = '8';
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\401_Palindromes\\input.txt", "r", stdin);

    while(getline( std::cin, res ) && res != ""){
        bool isPalin = true;
        bool isMirrored = true;
        int i = 0, j = res.length() - 1;
        while( i <= j) {
            if (res[i] != res[j]){
                isPalin = false;
                break;
            }
            i++;
            j--;
        }

        std::string reverseStr = res;

        for( int i = 0; i < res.length(); i++ )
        {
            if( rev.find(reverseStr[i]) != rev.end() )
                reverseStr[i] = rev[reverseStr[i]];
            else
                reverseStr[i] = ' ';
        }

        for( int i = 0,j = res.length() - 1; i < reverseStr.length(); i++, j-- )
        {
            if( res[i] != reverseStr[j] )
            {
                isMirrored = false;
                break;
            }
        }

        if( isMirrored && isPalin )
            std::cout << res << " -- is a mirrored palindrome." << std::endl;
        else if( isPalin )
            std::cout << res << " -- is a regular palindrome." << std::endl;
        else if( isMirrored )
            std::cout << res << " -- is a mirrored string." << std::endl;
        else
            std::cout << res << " -- is not a palindrome." << std::endl;

        std::cout << std::endl;
    }


    return 0;
}