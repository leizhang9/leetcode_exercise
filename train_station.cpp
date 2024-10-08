#include <iostream>
using namespace std;
#include<vector>
#include<stack>
#include<algorithm>

vector<vector<int>> results;

void train(vector<int>& in, vector<int>& out,stack<int>& station, int index) {
    if (index == in.size() && station.empty()) {
        results.push_back(out);
        return;
    }
    //into station
    if (index < in.size()) {
        station.push(in[index]);
        train(in, out, station, index + 1);
        station.pop(); //»ØËÝ
    }
    //leave station
    if (!station.empty()) {
        int top = station.top();
        station.pop();
        out.push_back(top);
        train(in, out, station, index);
        out.pop_back();
        station.push(top);
    }
}

int main() {
    int n;
    while (cin>>n) {
        vector<int> in(n);
        for (int i = 0; i < n; i++) {
            cin>>in[i];
        }
        vector<int>out;
        stack<int> station;
        results.clear();

        train(in, out, station, 0);

        sort(results.begin(), results.end());

        for (auto seq : results) {
            for (int i = 0; i < seq.size(); i++) {
                if (i != 0) {cout<<" ";}
                cout<<seq[i];
            }
            cout<<endl;
        }
    }
} 

//cin: 
//3
//1 2 3
