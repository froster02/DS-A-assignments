#include <iostream>
#include <vector>
using namespace std;

void numRookCaptures(vector<vector<char> >& board) {
    int size = board.size();
    bool present = false;
    int x, y, count = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(board[i][j] == 'R'){
                present = true;
                x = i, y = j;
                break;
            }
        }
    }
    
    for(int i = x + 1; i < size; i++){
          if(board[i][y] == 'p'){
            count += 1;
            break;
        }
        if(board[i][y] == 'B')
            break;
    }
    for(int i = x - 1; i >= 0; i--){
        if(board[i][y] == 'p'){
            count += 1;
            break;
        }
        if(board[i][y] == 'B')
            break;
    }
    for(int j = y - 1; j >= 0; j--){
       if(board[x][j] == 'p'){
            count += 1;
            break;
        }
        if(board[x][j] == 'B')
            break;
    }
    for(int j= y + 1; j < size; j++){
        if(board[x][j] == 'p'){
            count += 1;
            break;
        }
        if(board[x][j] == 'B')
            break;
    }     
    cout << count;
}

int main(){
    
   vector<vector<char> > board  {{".",".",".",".",".",".",".","."},
                                 {".",".",".","p",".",".",".","."},
                                 {".",".",".","p",".",".",".","."},
                                 {"p","p",".","R",".","p","B","."},
                                 {".",".",".",".",".",".",".","."},
                                 {".",".",".","B",".",".",".","."},
                                 {".",".",".","p",".",".",".","."},
                                 {".",".",".",".",".",".",".","."}};
    numRookCaptures(board);
    
    return 0;
}
