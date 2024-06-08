#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(NULL);

    ios_base::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    vector<string> v(n);

    for(int i = 0; i < n; i++) {

        cin >> v[i];

    }

    int count = 64; // 최대값 설정 (8x8 체스판에서 최대 64개 변경 가능)

    // 8x8 체스판을 선택할 수 있는 모든 경우의 수에 대해 검사

    for(int i = 0; i < n - 7; i++) {

        for(int j = 0; j < m - 7; j++) {

            // 두 가지 패턴에 대해 필요한 칠하기 수를 계산

            int temp1 = 0, temp2 = 0;

            for(int k = 0; k < 8; k++) {

                for(int l = 0; l < 8; l++) {

                    // 좌상단이 흰색인 패턴

                    if ((k + l) % 2 == 0) {

                        if (v[i + k][j + l] != 'W') temp1++;

                        if (v[i + k][j + l] != 'B') temp2++;

                    } else {

                        if (v[i + k][j + l] != 'B') temp1++;

                        if (v[i + k][j + l] != 'W') temp2++;

                    }

                }

            }

            // 두 패턴 중 최소값을 선택

            count = min(count, min(temp1, temp2));

        }

    }

    cout << count << endl;

    return 0;

}