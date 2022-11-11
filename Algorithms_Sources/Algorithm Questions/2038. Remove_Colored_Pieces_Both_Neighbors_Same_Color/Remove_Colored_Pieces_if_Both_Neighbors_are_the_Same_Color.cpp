//Problem
//https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/

class Solution {
public:
    //AA
    bool winnerOfGame(string colors) {
        int alice_m = 0;
        int bob_m = 0;
        int c = 1;
        int pivot = 0;
        for(int i = 1; i < colors.size(); i++){
            if (colors[i] == colors[pivot]){
                c++;
            }
            else{
                if (c >= 3)
                    colors[pivot] == 'A' ? alice_m += c - 2:bob_m += c - 2;
                pivot = i;
                c = 1;
            }
        }
        if (c >= 3)
            colors[pivot] == 'A' ? alice_m += c - 2:bob_m += c - 2;
        cout << alice_m << " " << bob_m << endl;
        return alice_m > bob_m;
    }
};