int solution(vector<int>& blocks) {
    int n = blocks.size();
    vector<int> rightDistance(n, 0);
    vector<int> leftDistance(n, 0);

    // חישוב המרחקים ימינה
    for (int i = n - 2; i >= 0; i--) {
        if (blocks[i] <= blocks[i + 1]) {
            rightDistance[i] = rightDistance[i + 1] + 1;
        }
    }

    // חישוב המרחקים שמאלה
    for (int i = 1; i < n; i++) {
        if (blocks[i] <= blocks[i - 1]) {
            leftDistance[i] = leftDistance[i - 1] + 1;
        }
    }

    // חישוב המרחק המקסימלי
    int maxDistance = 0;
    for (int i = 0; i < n; i++) {
        maxDistance = max(maxDistance, leftDistance[i] + rightDistance[i] + 1);
    }

    return maxDistance;
}
