class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> que;
        for(auto a : stones)
            que.push(a);

        int up, down,size = 0;

        while(que.size() != 1){
            up = que.top(); que.pop();
            down = que.top(); que.pop();

            que.push(up - down);
        }
        return que.top();
    }
};