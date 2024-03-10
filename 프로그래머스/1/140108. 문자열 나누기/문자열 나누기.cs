using System;
using System.Linq;
using System.Text;

public class Solution {
    public int solution(string s) {
         int answer = 0;

 char target = s[0];

 int equalCount = 0;
 int unequalCount = 0;

 StringBuilder sb = new StringBuilder();

 foreach (char c in s)
 {
     if(target == '\0') target = c;

     sb.Append(c);

     if (target == c)
         equalCount++;
     else
         unequalCount++;

     if(equalCount == unequalCount)
     {
         sb.Append(' ');
         target = '\0';
     }
 }

 answer = sb.ToString().Trim().Count(c => c == ' ') + 1;

return answer;
    }
}