#include <bits/stdc++.h>

using namespace std;

bool Compare(int a, int b)
{
    int abs1 = abs(a);
    int abs2 = abs(b);

    if (abs1 == abs2)
    {
        return a > b;
    }

    return abs1 > abs2;
}
class PriorityQueue
{
    vector<int> heap;

public:
    void Push(int vl)
    {
        heap.push_back(vl);
        int idx = heap.size() - 1;
        while (idx > 0)
        {
            int parent = (idx - 1) / 2;
            if (Compare(heap[parent], heap[idx]))
                break;

            swap(heap[parent], heap[idx]);
            idx = parent;
        }
    }

    int Pop()
    {
        if (heap.empty())
            return 0;

        int ret = heap[0];

        heap[0] = heap.back();
        heap.pop_back();
        int idx = 0;

        while (true)
        {
            int left = idx * 2 + 1;
            int right = idx * 2 + 2;

            if (left >= heap.size())
            {
                break;
            }

            int next = left;
            if (right < heap.size() && Compare(heap[right], heap[next]))
            {
                next = right;
            }

            if (Compare(heap[idx], heap[next]))
            {
                break;
            }

            swap(heap[idx], heap[next]);
            idx = next;
        }

        return ret;
    }
};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    PriorityQueue pq;

    int n;
    cin >> n;

    while (n--)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            cout << pq.Pop() << '\n';
        }
        else
        {
            pq.Push(input);
        }
    }

    return 0;
}