class Solution {
public:
    int dimension;

    // Helper function to process the topological sort on the given conditions
    vector<int> topologicalSort(vector<vector<int>>& conditions) {
        // Graph representation and array to track incoming edges
        vector<vector<int>> graph(dimension + 1);
        vector<int> inDegree(dimension + 1);

        // Create graph and update in-degrees for each node
        for (auto& edge : conditions) {
            int from = edge[0], to = edge[1];
            graph[from].push_back(to);
            ++inDegree[to];
        }

        queue<int> queue;

        // Initialize queue with nodes having no incoming edges
        for (int i = 1; i <= dimension; ++i) {
            if (inDegree[i] == 0) {
                queue.push(i);
            }
        }

        vector<int> sortedOrder;
        // Perform topological sort
        while (!queue.empty()) {
            int count = queue.size();
            while (count--) {
                int node = queue.front();
                sortedOrder.push_back(node);
                queue.pop();
                // Reduce in-degree for neighboring nodes and
                // add them to the queue if their in-degree becomes zero
                for (int neighbor : graph[node]) {
                    if (--inDegree[neighbor] == 0) {
                        queue.push(neighbor);
                    }
                }
            }
        }
        // If the sorted order does not include all nodes, return an empty array
        return sortedOrder.size() == dimension ? sortedOrder : vector<int>();
    }

    // Public method to build the desired matrix based on row and column conditions
    vector<vector<int>> buildMatrix(int dimension, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        this->dimension = dimension;
        // Perform topological sort on both row and column conditions
        vector<int> rowOrder = topologicalSort(rowConditions);
        vector<int> colOrder = topologicalSort(colConditions);

        // If either sort fails, return an empty matrix
        if (rowOrder.empty() || colOrder.empty()) return {};

        // Initialize the answer matrix with the correct dimensions
        vector<vector<int>> answer(dimension, vector<int>(dimension));
        vector<int> colIndexMap(dimension + 1);

        // Map the column order numbers to indices
        for (int i = 0; i < dimension; ++i) {
            colIndexMap[colOrder[i]] = i;
        }

        // Fill matrix using the sorted row and column orders
        for (int i = 0; i < dimension; ++i) {
            int rowIndex = i;
            int colIndex = colIndexMap[rowOrder[i]];
            answer[rowIndex][colIndex] = rowOrder[i];
        }
        return answer;
    }
};