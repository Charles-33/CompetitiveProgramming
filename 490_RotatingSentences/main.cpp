#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

int main()
{
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\490_RotatingSentences\\input.txt", "r", stdin);

    std::deque<char> q;
    std::vector<std::deque<char>> words;

    // will hold the longest sentence
    int maxChars = 0;

    std::string temp = "";

    // read in each sentence to a char vector, then push it to vector
    while( std::getline( std::cin, temp ) ) {
        // constructor that is not supported with queue yet
        std::deque<char> sentence (temp.begin(), temp.end() );
        // deques return long long from their size() function, casting is safe since input guarantees size of < 100,
        maxChars = std::max( maxChars, (int)sentence.size() );
        words.push_back( sentence );
    }

    std::reverse( words.begin(), words.end() );

    for( int i = 0; i < maxChars; i++ ){
        for( int x = 0; x < words.size() ; x++ ){
            if( words[x].empty() )
                std::cout << " ";
            else {
                std::cout << words[x].front();
                words[x].pop_front();
            }
        }
        std::cout << std::endl;
    }
    return 0;
}