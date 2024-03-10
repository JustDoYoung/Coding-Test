using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int k, int[] score) {
         int length = score.Length;

                int[] answer = new int[length];
                List<int> honor = new List<int>();

                for (int i = 0; i < length; i++)
                {
                    honor.Add(score[i]);
                    honor.Sort();

                    if (i < k)
                        answer[i] = honor[0];
                    else
                        answer[i] = honor[i - k + 1];
                }
                return answer;
    }
}