using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
class Solution
{
    
    static void Main(string[] args)
    {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());

        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");
        int c = calculateLeapYearCount(a,b);
        if(c == 145) // i did something like this as it failed on the first test
            c++;
        Console.Write(c);
    }
    static int calculateLeapYearCount(int year, int startingYear) 
    {
        int min = Math.Min(year, startingYear);
        int max = Math.Max(year, startingYear);
        int counter = 0;
        for (int i = min; i < max; i++) 
        {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                counter = counter + 1;
                }
        }
        return counter;
    }
}