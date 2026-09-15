#include <stdio.h>

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin() {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;

        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;
    }

    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main() {
    int choice, player = 1, moves = 0;
    char mark;

    while(moves < 9) {
        displayBoard();

        if(player == 1) {
            mark = 'X';
            printf("Player 1 (X), Enter Position: ");
        } else {
            mark = 'O';
            printf("Player 2 (O), Enter Position: ");
        }

        scanf("%d", &choice);

        if(choice >= 1 && choice <= 9) {
            int row = (choice - 1) / 3;
            int col = (choice - 1) % 3;

            if(board[row][col] != 'X' &&
               board[row][col] != 'O') {

                board[row][col] = mark;
                moves++;

                if(checkWin()) {
                    displayBoard();
                    printf("Player %d Wins!\n", player);
                    return 0;
                }

                player = (player == 1) ? 2 : 1;
            } else {
                printf("Position Already Taken!\n");
            }
        } else {
            printf("Invalid Position!\n");
        }
    }

    displayBoard();
    printf("It's a Draw!\n");

    return 0;
}
