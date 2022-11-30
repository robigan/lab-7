#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> cache(2, vector<int>(2, 0));
    vector<vector<int>> newCache;

    cout << "First number: ";
    cin >> cache[0][0];
    
    cout << "Second number: ";
    cin >> cache[0][1];
    
    cout << "Third number: ";
    cin >> cache[1][0];
    
    cout << "Fourth number: ";
    cin >> cache[1][1];
    
    int scaleFactor;
    cout << "Scale array by how much? ";
    cin >> scaleFactor;

    for (int i = 0; i < cache.size(); i++) {
        for (int j = 0; j < cache[i].size(); j++) {
            for (int k = 0; k < scaleFactor; k++) {
                newCache[i].push_back(cache[i][j]);
            }
        }
    }

    for (int i = 0; i < newCache.size(); i++) {
        for (int j = 0; j < newCache.size(); j++) {
            cout << newCache[i][j] << " ";
        }
        cout << endl;
    }
}