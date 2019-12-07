#include <stdio.h>
#include <string.h>
#include "tetris.h"


int pieces[7][4][4][4] = {
	// tall
  {
	{
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x11, 0x11, 0x11, 0x11 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	  { 0x00, 0x11, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x11, 0x11, 0x11, 0x11 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // square
  {
	{
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // L
  {
	{
	  { 0x00, 0x13, 0x00, 0x00 },
	  { 0x00, 0x13, 0x00, 0x00 },
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x13, 0x13, 0x13, 0x00 },
	  { 0x13, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x00, 0x00, 0x13, 0x00 },
	  { 0x00, 0x00, 0x13, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x13, 0x00 },
	  { 0x13, 0x13, 0x13, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // backwards L
  {
	{
	  { 0x00, 0x00, 0x14, 0x00 },
	  { 0x00, 0x00, 0x14, 0x00 },
	  { 0x00, 0x14, 0x14, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x14, 0x00, 0x00, 0x00 },
	  { 0x14, 0x14, 0x14, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x14, 0x14, 0x00 },
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x14, 0x14, 0x14, 0x00 },
	  { 0x00, 0x00, 0x14, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // half +
  {
	{
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x14, 0x14, 0x00 },
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x14, 0x14, 0x14, 0x00 },
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x14, 0x14, 0x00, 0x00 },
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x14, 0x00, 0x00 },
	  { 0x14, 0x14, 0x14, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // S
  {
	{
	  { 0x00, 0x13, 0x00, 0x00 },
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x00, 0x00, 0x13, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x13, 0x13, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x13, 0x00, 0x00 },
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x00, 0x00, 0x13, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x00, 0x13, 0x13, 0x00 },
	  { 0x13, 0x13, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  },
  // backward S
  {
	{
	  { 0x00, 0x00, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x12, 0x12, 0x00, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x12, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x12, 0x00, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
	{
	  { 0x00, 0x00, 0x00, 0x00 },
	  { 0x12, 0x12, 0x00, 0x00 },
	  { 0x00, 0x12, 0x12, 0x00 },
	  { 0x00, 0x00, 0x00, 0x00 },
	},
  }
};


int move_down() {
  if (is_valid(pp, pr, px, py+1)) {
    py++;
    return 1;
  }
  commit2board(pp, pr, px, py);
  next_piece();
  return 0;
}

int move_left() {
  if (is_valid(pp, pr, px-1, py)) {
    px--;
    return 1;
  }
  return 0;
}

int move_right() {
  if (is_valid(pp, pr, px+1, py)) {
    px++;
    return 1;
  }
  return 0;
}

void drop() {
  while (move_down()) score++;
}

void next_piece() {
  // end game logic here
  pp=rand()%7;
  py = 0; pr = 0; px = COLS/2-2;
  if (!is_valid(pp, pr, px, py))
    game = 0;
}

void rotate() {
  if (is_valid(pp, (pr+1)%4, px, py)) {
    pr = (pr+1)%4;
    return;
  }
  if (is_valid(pp, (pr+1)%4, px-1, py)) {
	pr = (pr+1)%4;
	px = px-1;
	return;
  }
  if (is_valid(pp, (pr+1)%4, px+1, py)) {
  	pr = (pr+1)%4;
  	px = px+1;
  	return;
  }
  if (is_valid(pp, (pr+1)%4, px-2, py)) {
  	pr = (pr+1)%4;
  	px = px-2;
  	return;
  }
  if (is_valid(pp, (pr+1)%4, px+2, py)) {
	pr = (pr+1)%4;
	px = px+2;
	return;
  }
}

int is_valid(int p, int r, int x, int y) {
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      if (pieces[p][r][i][j] && ((x+j >= COLS || y+i >= ROWS || x+j < 0 || y+i < 0) || board[y+i][x+j])) {
        return 0;
      }
  return 1;
}

void commit2board(int p, int r, int x, int y) {
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      if (pieces[p][r][i][j])
        board[y+i][x+j] = pieces[p][r][i][j];

  /////////////////////////////////////////////////////////////////////////////
  // TODO: destroy any complete rows!!!
  flash_complete_rows();
}

void flash_complete_rows() {
	for (int i = 0; i < ROWS; i++) {
		int full = 1;
		for (int j = 0; j < COLS; j++) {
			if (!board[i][j]) {
				full = 0;
				break;
			}
		}

		if (full) {
			for (int jj = 0; jj < COLS; jj++) {
				board[i][jj] = WHITE;
			}
		}
	}

	del_white = now;
}

void delete_rows() {
	int c = 0;
	for (int j = 0; j < COLS; j++) {
		int i = ROWS - 1;
		c = 0;
		while (i-c >= 0) {
			while (board[i-c][j] == WHITE) c++;
			board[i][j] = board[i-c][j];
			i--;
		}
		while (i >= 0) {
			board[i][j] = 0x00;
			i--;
		}
	}

	score += c;

	del_white = 0;
}

void clear_board() {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 20; j++)
			board[j][i] = 0x00;
}

void draw2hardware(volatile unsigned int * base){
	char p_board[ROWS][COLS];
	memcpy(p_board, board, ROWS*COLS);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (pieces[pp][pr][i][j])
				p_board[py+i][px+j] = pieces[pp][pr][i][j];

	int block_idx = 0;
	for (int i = 0; i < 25; i++) {
		int cur = 0;
		for (int b = 0; b < 8; b++) {
			cur |= ( ((p_board[block_idx/10][block_idx%10] & 0x0f)) << (b*4) ) & (0x0f << (4*b));
			block_idx++;
//			printf("%d: %02x - %08x\n", block_idx, p_board[block_idx/10][block_idx%10], cur);
		}
		base[i] = cur;
	}

	base[31] = score;

}
