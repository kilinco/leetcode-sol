#include<vector>
class Solution {
public:
    int numRookCaptures(std::vector<std::vector<char>>& board) {
       int o = 0; 
       int x,y,px,py;
       for(int i = 0; i < 8; i++) {
           for(int j = 0; j < 8; j++) {
               if(board[i][j] == 'R'){
                    px = i; py = j;         
               } 
           }
       }
       x=px;y=py;
       while(--x>0) 
           if(board[x][y] == 'p') { o++; break;}
           else if (board[x][y] == 'B') break;
       x=px;y=py;
       while(++x<8) 
           if(board[x][y] == 'p') { o++; break;}
           else if (board[x][y] == 'B') break;
       x=px;y=py;
       while(--y>0) 
           if(board[x][y] == 'p') { o++; break;}
           else if (board[x][y] == 'B') break;
       x=px;y=py;
       while(++y<8) 
           if(board[x][y] == 'p') { o++; break;}
           else if (board[x][y] == 'B') break;
       return o;
    }
};
