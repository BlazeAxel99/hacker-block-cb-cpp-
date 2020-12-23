

//Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list
Note : You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.
Input Format

First line contains input N. Next line contains N space separated String denoting the elements of the array. third line contains word1 and word2
Constraints

None
Output Format

Shortest Distance between word1 and word 2
Sample Input

5
practice  makes  perfect  coding makes
coding practice

Sample Output

3

Explanation

5
practice makes perfect coding makes
makes coding
output : 1

//


Word Distance - I
Given a list of words and two word word1 and word2 , take two pointer p1 nad p2
Initialize p1 = -1 and p2 = -1
res -- > the shortest distance between these two words in the list.
Steps:

   1 loop from value i=1to till i<list.size().

    If word1 is equal to word at index i
    Update p1
    If word2 is equal to word at index i
    Update p2

   2 After each and every iteration
    If p1!=-1 and p2!=-1
    Update res

   3 res = min(res,abs(p1-p2))
    Time complexity O(N)

     


    import java.util.Scanner;
    public class Main {
        public static int shortestDistance(String[] words, String word1, String word2) {
            int a1 = -1;
            int a2 = -1;
            int min = words.length;
            for (int i = 0; i < words.length; i++) {
                if (words[i].equals(word1)) {
                    a1 = i;
                } else if (words[i].equals(word2)) {
                    a2 = i;
                }
                if (a1 != -1 && a2 != -1) {
                    min = Math.min(min, Math.abs(a1 - a2));
                }
            }
            return min;
        }



        public static void main(String[] args)  {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            String [] words =  new String[n];
            for(int i=0; i<n; i++){
                words[i] = sc.next();
            }
            String word1 = sc.next();
            String word2 = sc.next();
            // for(int i=0; i<n; i++){
            //  System.out.print(words[i]+" ");
            // }
            //System.out.println();
            System.out.println(shortestDistance(words,word1,word2));

        }
    }

     

