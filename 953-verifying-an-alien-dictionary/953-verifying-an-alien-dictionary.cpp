class Solution {
public:
    bool helper(const string &s1, const string &s2, const string &order) {
    int len = min(s1.size(), s2.size());

    for (int i = 0; i < len; i++) {
        if (order.find(s1[i]) < order.find(s2[i])) {
            return true;
        } else if (order.find(s1[i]) > order.find(s2[i])) {
            return false;
        }
    }

    if (len == s1.size()) {
        return true;
    } else {
        return false;
    }
}

bool isAlienSorted(vector<string> &words, string order) {
    for (int i = 0; i < words.size() - 1; i++) {
        if (!helper(words[i], words[i + 1], order)) {
            return false;
        }
    }

    return true;
}
};