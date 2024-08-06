#include<bits/stdc++.h>
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int age;
        int count = 0;
        for (int i = 0; i < details.size(); i++) {
            age = stoi (details[i].substr(11, 2));
            if (age > 60) {
                count++;
            } else {
                continue;
            }
        }
        return count;
    }
};