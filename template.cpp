#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <cstdio>
#include <tuple>
#include <numeric>
#include <functional>
#include <fstream>
//↑includeは一応全部写経する(?)
//必須レベル
using namespace std; using ll = long long; using vl = vector<ll>; using vll = vector<vl>;
//任意レベル
using ld = long double; using pll = pair<ll, ll>; using vlll = vector<vll>; using vpll = vector<pll>;
using vs = vector<string>; using tll = tuple<ll, ll, ll>; using vtll = vector<tll>;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
const ld PI = 3.1415926535897932;
#define mp make_pair
#define mt make_tuple
ll ctoi(char c) {
	switch (c) {
	case '0': return 0; case '1': return 1; case '2': return 2;
	case '3': return 3; case '4': return 4; case '5': return 5;
	case '6': return 6; case '7': return 7; case '8': return 8;
	case '9': return 9;  default: return 0;
	}
}
bool pairCompare(const pll firstElof, pll secondElof)
{
	return firstElof.second < secondElof.second;
}
//debug関連(必要になったら導入)
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
void in() {}
void debug_out() { cerr << endl; }
template<typename Head, typename... Tail>
void debug_out(Head h, Tail... t) {
	cerr << " " << h;
	if (sizeof...(t) > 0) cerr << " :";
	debug_out(t...);
}
template <typename T>
ostream& operator<<(ostream& os, vector<T> vec) {
	for (size_t i = 0; i < vec.size(); i++)os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	return os;
}
//初期変数系(A終わったら書く?)
ll i, j, k, l; ll N, M, K, H, W, X, Y, Z, R, Q, T;
ll MOD = 998244353, INF = 1LL << 60, ans = 0, z = 0, o = 1;
vl flag, D; vector<vpll> path;
//***********//
int main() {
	// input・output制御//
	ifstream ifs("A1");
	cin.rdbuf(ifs.rdbuf());
	ofstream ofs("A_answer.txt");
	// ここから内容 //
}
