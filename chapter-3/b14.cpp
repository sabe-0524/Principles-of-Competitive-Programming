#include <iostream>
#include <algorithm>
using namespace std;

// // ビット全探索
// int a[32];

// int main(void)
// {
//   int n, k;
//   long long sum;
//   cin >> n >> k;
//   for (int i = 0; i < n; i++)
//     cin >> a[i];
//   for (int i = 0; i < (1 << n); i++)
//   {
//     sum = 0;
//     for (int j = 0; j < n; j++)
//     {
//       if ((i >> j) & 1)
//         sum += a[j];
//     }
//     if (sum == k)
//     {
//       cout << "Yes" << endl;
//       return (0);
//     }
//   }
//   cout << "No" << endl;
//   return (0);
// }

// 半分列挙
// int b[65539], c[65539] = {0};
// int main(void)
// {
//   int n, k;
//   int a[32];
//   cin >> n >> k;
//   for (int i = 0; i < n; i++)
//     cin >> a[i];
//   int half1 = n / 2;
//   int half2 = n - half1;
//   for (int i = 0; i < (1 << half1); i++)
//   {
//     for (int j = 0; j < half1; j++)
//     {
//       if ((i >> j) & 1)
//         b[j] += a[j];
//     }
//   }
//   for (int i = 0; i < (1 << (half2)); i++)
//   {
//     for (int j = 0; j < half2; j++)
//     {
//       if ((i >> j) & 1)
//         c[j] += a[j + half1];
//     }
//   }
//   sort(c, c + half2);
//   int tmp;
//   for (int i = 0; i < half1; i++)
//   {
//     tmp = lower_bound(c, c + half2, k - b[i]) - c;
//     if (tmp != half2 && c[tmp] == k - b[i])
//     {
//       cout << "Yes" << endl;
//       return (0);
//     }
//   }
//   cout << "No" << endl;
//   return (0);
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// 「配列 A にあるカードからいくつか選んだときの合計」として考えられるものを列挙
// ビット全探索を使う
vector<long long> Enumerate(vector<long long> A) {
	vector<long long> SumList;
	for (int i = 0; i < (1 << A.size()); i++) {
		long long sum = 0; // 現在の合計値
		for (int j = 0; j < A.size(); j++) {
      if ((i >> j) & 1)
        sum += A[j];
		}
		SumList.push_back(sum);
	}
	return SumList;
}
 
long long N, K;
long long A[39];
 
int main() {
	// 入力
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];
 
	// カードを半分ずつに分ける
	vector<long long> L1, L2;
	for (int i = 1; i <= N / 2; i++) L1.push_back(A[i]);
	for (int i = N / 2 + 1; i <= N; i++) L2.push_back(A[i]);
 
	// それぞれについて、「あり得るカードの合計」を全列挙
	vector<long long> Sum1 = Enumerate(L1);
	vector<long long> Sum2 = Enumerate(L2);
	sort(Sum1.begin(), Sum1.end());
	sort(Sum2.begin(), Sum2.end());
 
	// 二分探索で Sum1[i] + Sum2[j] = K となるものが存在するかを見つける
	for (int i = 0; i < Sum1.size(); i++) {
		int pos = lower_bound(Sum2.begin(), Sum2.end(), K - Sum1[i]) - Sum2.begin();
		if (pos < Sum2.size() && Sum2[pos] == K - Sum1[i]) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}