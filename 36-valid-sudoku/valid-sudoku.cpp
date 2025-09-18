class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
 std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> blocks(9);

        // Iterate through every cell of the 9x9 board
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char current_val = board[r][c];

                // If the cell is empty, skip it
                if (current_val == '.') {
                    continue;
                }

                // --- CHECK FOR DUPLICATES ---

                // Calculate the index for the 3x3 block (0-8)
                int block_index = (r / 3) * 3 + (c / 3);

                // Check if the number already exists in the current row, column, or block.
                // .count() is a clean way to check for existence.
                if (rows[r].count(current_val) || 
                    cols[c].count(current_val) || 
                    blocks[block_index].count(current_val)) 
                {
                    return false; // Found a duplicate
                }

                // --- INSERT THE NEW NUMBER ---

                // If no duplicates were found, add the current value to all three sets
                rows[r].insert(current_val);
                cols[c].insert(current_val);
                blocks[block_index].insert(current_val);
            }
        }

        // If the entire board is checked without finding duplicates, it's valid
        return true;
    }
};