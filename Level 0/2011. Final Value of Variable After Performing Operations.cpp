class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (string op : operations) {
            x += (op[1] == '+') ? 1 : -1;
        }

        return x;
    }
};
// learned a new thing just now how string operations perfom in vector arrays and ternery operators work
