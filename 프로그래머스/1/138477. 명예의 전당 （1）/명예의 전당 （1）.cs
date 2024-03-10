using System;

public class Solution {
    public int[] solution(int k, int[] score) {
        int length = score.Length;
int[] result = new int[length];

for (int i = 0; i < length; i++)
{
   for (int j = i; j >= 1; j--)
    {
        if(score[j] > score[j - 1])
        {
            int temp = score[j];
            score[j] = score[j - 1];
            score[j - 1] = temp;
        }
    }

    if (i < k)
        result[i] = score[i];
    else
        result[i] = score[k - 1];
}

return result;
    }
}