#include <iostream>
#include <vector>
#include <sstream>

int main(){
    int n = 0;

    freopen("C:\\Users\\Charles\\Documents\\Competitive_coding\\541_ErrorCorrection\\input.txt", "r", stdin);

    while( scanf("%d\n", &n) && n != 0){
        std::vector<std::vector<int>> matrix( n, std::vector<int>(n));
        int oddRow = -1;
        int oddRowCount = 0;

        int i = 0, j = 0;
        for( i; i < n; i++ ){
            std::string input = "";
            std::getline( std::cin, input );
            std::istringstream iss(input);
            int rowParityCount = 0;
            for( j = 0; j < n; j++ ){
                int x;
                iss >> x;
                matrix[i][j] = x;
                if( matrix[i][j] )
                    rowParityCount++;
            }
            if( rowParityCount % 2 == 1 ){
                oddRowCount++;
                oddRow = i;
            }
        }

        int oddCol = -1;
        int oddColCount = 0;
        for( i = 0; i < n; i++ ){
            int colParityCount = 0;
            for( j = 0; j < n; j++ ){
                if(matrix[j][i])
                    colParityCount++;
            }
            if( colParityCount % 2 == 1 ){
                oddColCount++;
                oddCol = i;
            }
        }

        if( oddRowCount == 0 && oddColCount == 0 )
            std::cout << "OK" << std::endl;
        else if( oddRowCount >= 2 || oddColCount >= 2 )
            std::cout << "Corrupt" << std::endl;
        else{
            matrix[oddRow][oddCol] ^= 1;

            bool corrupt = false;
            for( i = 0; i < n; i++ ){
                int colParityCount = 0;
                int rowParityCount = 0;
                for( j  = 0; j < n; j++ ){
                    if( matrix[i][j] )
                        colParityCount++;
                    if( matrix[j][i] )
                        rowParityCount++;
                }
                if( colParityCount % 2 == 1 || rowParityCount % 2 == 1 ){
                    corrupt = true;
                    break;
                }
            }
            if( corrupt ){
                std::cout << "Corrupt" << std::endl;
            }
            else{
                std::cout << "Change bit (" << oddRow + 1 << "," << oddCol + 1 << ")" << std::endl;
            }
        }
    }
    return 0;
}