class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        // vector<vector<int>> res = image;
        fill(image, sr, sc, color, image[sr][sc]);
        return image;
    }

    void fill(vector<vector<int>> &image, int sr, int sc, int color, int org) {

        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != org) {
            return;
        }

        image[sr][sc] = color;

        fill(image, sr, sc + 1, color, org);
        fill(image, sr + 1 , sc, color, org);
        fill(image, sr, sc - 1, color, org);
        fill(image, sr - 1, sc, color, org);
    }
};