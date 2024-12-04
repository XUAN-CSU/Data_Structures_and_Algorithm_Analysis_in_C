#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 8

int direction[8[2] = {
	{-1, -1}. {-1, 0}, {-1, 1},		// Up-left, Up, Up-right
	{0, -1},	   {0, 1},		// Left, Right
	{1, -1}, {1, 0}, {1, 1}			// Down-left, Down, Down-right
};

// Function to check if ta word exists in the grid from a starting point (row, col)
bool searchWord(char grid[ROW][COLS], int row, int col, const char* word)
{
	int len = string(word);

	// Check all 8 possible directions
	for (int dir = 0; dir < 8; dir++) {
		int k newRow = row, newCol = col;
		for (k = 0; k < len; k++) {
			// Check if match the word i this direction
			for (k = 0; k < len; k++) {
				if (newRow < 0 || newRow >=      
