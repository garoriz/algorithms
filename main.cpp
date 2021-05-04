#include <iostream>
#include <vector>

using namespace std;

vector<int> convertIntoBST(const vector<int> &arr) {
    vector<int> binaryTreeToArr;
    int middleElement = arr[arr.size() / 2];
    binaryTreeToArr.push_back(middleElement);
    int left = arr.size() / 2 - 1;
    int right = arr.size() / 2 + 1;
    while (left >= 0 && right < arr.size()) {
        binaryTreeToArr.push_back(arr[left]);
        binaryTreeToArr.push_back(arr[right]);
        left--;
        right++;
    }
    if (left >= 0) {
        while (left >= 0) {
            binaryTreeToArr.push_back(arr[left]);
            left--;
        }
    }
    if (right < arr.size()) {
        while (right < arr.size()) {
            binaryTreeToArr.push_back(arr[right]);
            right++;
        }
    }
    return binaryTreeToArr;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 5, 10, 12};
    vector<int> balanced_tree = convertIntoBST(arr);
    for (int i = 0; i < balanced_tree.size(); ++i) {
        cout << balanced_tree[i] << " ";
    }
    return 0;
}