#include <../include/board.hpp>

void print_board(void)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        std::cout << "-------------------------" << std::endl;
        std::cout << "|";
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            
            switch (tictactoe_board[i][j])
            {
                case EMPTY:
                    break;
            
                case X:
                    std::cout << "   X";
                    break;
    
                default:
                    std::cout << "   O";
                    break;

            }

            std::cout << "\t|";
            
        }

        std::cout << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
}