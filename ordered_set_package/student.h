#include <vector>
#include <algorithm>
#include <set>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for(auto& aa : A){
        v.push_back(aa);
        s.insert(aa);
    }
    for(auto& bb: B){
        if(s.find(bb) == s.end()) v.push_back(bb);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for(auto& bb : B){
        s.insert(bb);
    }
    for(auto &aa : A){
        if(s.find(aa) != s.end()) v.push_back(aa);
    }
    return v;
}
