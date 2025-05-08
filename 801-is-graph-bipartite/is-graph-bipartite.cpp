class Solution {
private:
    bool dfs(vector<int> &color, int curr, int node, vector<vector<int>>& graph) {
        color[node] = curr; // Color the current node
        for (int ele : graph[node]) {
            if (color[ele] == 0) { // If the neighbor is uncolored
                color[ele] = -curr; // Color it with the opposite color
                if (!dfs(color, -curr, ele, graph)) // Recursively color the neighbor
                    return false;
            } else if (color[ele] == color[node]) { // If the neighbor has the same color
                return false; // Not bipartite
            }
        }
        return true; // Successfully colored
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0); // Initialize color array with 0 (uncolored)

        for (int i = 0; i < n; i++) { // Check all nodes (for disconnected graphs)
            if (color[i] == 0) { // If the node is uncolored
                if (!dfs(color, 1, i, graph)) // Start coloring with color 1
                    return false; // If any component is not bipartite
            }
        }
        return true; // All components are bipartite
    }
};

