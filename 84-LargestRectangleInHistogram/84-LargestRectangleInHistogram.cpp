// Last updated: 6/3/2026, 11:33:36 PM
class Solution {
public:
    vector<int> nge(vector<int>& heights) {
        int n = heights.size();
        vector<int> ng(n);
        stack<int> s;

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            if (s.empty()) ng[i] = n;   // if not greater, extend all the way to n    
            else ng[i] = s.top();
            s.push(i);
        }
        return ng;
    }

    vector<int> npe(vector<int>& heights) {
        int n = heights.size();
        vector<int> ns(n);
        stack<int> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            if (s.empty()) ns[i] = -1;      // if no smaller to left, extend to -1
            else ns[i] = s.top();
            s.push(i);
        }
        return ns;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ng = nge(heights);
        vector<int> ns = npe(heights);

        vector<int> area;
        for (int i = 0; i < n; i++) {
            int width = ng[i] - ns[i] - 1;
            int a = heights[i] * width;
            area.push_back(a);
        }

        int maxi = INT_MIN;
        for (int i = 0; i < area.size(); i++)
            maxi = max(maxi, area[i]);
        return maxi;
    }
};
