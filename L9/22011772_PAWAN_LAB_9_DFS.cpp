//PAWANDEEP SINGH A/L BALWINDER SINGH 
//22011772

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Map char to index and back
unordered_map<char, int> charToIndex = {
    {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}
};

unordered_map<int, char> indexToChar = {
    {0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {4, 'E'}
};

void dfsUtil(int current, const vector<vector<int>>& adjList, vector<bool>& visited) {
    visited[current] = true;
    cout << indexToChar[current] << " ";

    for (int neighbor : adjList[current]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, adjList, visited);
        }
    }
}

void dfs(int start, const vector<vector<int>>& adjList) {
    vector<bool> visited(5, false);
    cout << "DFS from " << indexToChar[start] << ": ";
    dfsUtil(start, adjList, visited);
    cout << endl;
}

int main() {
    vector<vector<int>> adjList(5);

    // Build adjacency list (directed graph)
    adjList[0] = {1, 2, 3};       // A -> B, C, D
    adjList[1] = {0, 3, 4};       // B -> A, D, E
    adjList[2] = {0, 3};          // C -> A, D
    adjList[3] = {0, 1, 2, 4};    // D -> A, B, C, E
    adjList[4] = {1, 3};          // E -> B, D

    // Perform DFS from each node
    for (int i = 0; i < 5; ++i) {
        dfs(i, adjList);
    }

    return 0;
}