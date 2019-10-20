#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#include <algorithm>

int main() {
    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\10611_PlayboyChimp\\input.txt", "r", stdin);

    std::vector<int> femaleHeights;
    int n = 0;

    scanf("%d\n", &n);
    for( int i = 0; i < n; i++ ){
        int temp = 0;
        std::cin >> temp;

        femaleHeights.push_back(temp);
    }

    int numOfLuchus = 0;
    std::vector<int> luchuHeights;
    std::cin >> numOfLuchus;


    for( int i = 0; i < numOfLuchus; i++ ){
        int temp = 0;
        std::cin >> temp;
        auto low = std::lower_bound(femaleHeights.begin(), femaleHeights.end(), temp);
        auto high = std::upper_bound(femaleHeights.begin(), femaleHeights.end(), temp );
        if( low == femaleHeights.end() ){
            std::cout << *(femaleHeights.end() - 1)<< " ";
        }else
        {
            if( low == femaleHeights.begin() )
                std::cout << "X ";
            else
                std::cout << *(low - 1) << " ";
        }

        if( high == femaleHeights.end() ){
            std::cout<< "X";
        }
        else{
            std::cout << *high;
        }
        std::cout << std::endl;
    }
}