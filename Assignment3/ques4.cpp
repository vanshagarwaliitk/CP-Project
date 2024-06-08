   vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial_color = image[sr][sc];
        if (initial_color != color) {
            fill(initial_color, image, sr, sc, color);
        }
        return image;
    }

    void fill(int i_color, vector<vector<int>>& image, int sr, int sc, int color) {
        image[sr][sc] = color;
        int row[] = {0, 0, 1, -1};
        int col[] = {1, -1, 0, 0};
        for (int i = 0; i < 4; i++) {
            int n = image.size();
            int m = image[0].size();
            int nr = sr + row[i];
            int nc = sc + col[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && image[nr][nc] == i_color) {
                fill(i_color, image, nr, nc, color);
            }
        }
    }
