package com.raafat;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int n, a, b, m, p, id = 0;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number of intervals you want.");
        n = scn.nextInt();
        System.out.println("Enter the range beginning of intervals you want.");
        a = scn.nextInt();
        System.out.println("Enter the range ending of intervals you want.");
        b = scn.nextInt();
        System.out.println("Enter the point you want to query");
        p = scn.nextInt();
        Random rand = new Random();
        Interval[] intervals = new Interval[n];
        ArrayList<Integer> output = new ArrayList<>();
        long startTime, endTime, elapsedTime;
        for (int i = 0; i < n; i++) {
            intervals[i] = new Interval();
            intervals[i].id = id;
            intervals[i].begin = a + rand.nextInt(b+1);
            intervals[i].end = intervals[i].begin + 500 > b ? b : intervals[i].begin + 500;
            if (intervals[i].begin > intervals[i].end) {
                m = intervals[i].begin;
                intervals[i].begin = intervals[i].end;
                intervals[i].end = m;
            }
            id++;
        }
        startTime = System.nanoTime();
        for (Interval element:intervals) {
            if (element.begin <= p && element.end >= p) {
                //System.out.printf("The Beginning of range is: %d and the Ending of range is: %d \n", element.begin, element.end);
                output.add(element.id);
            }
        }

        endTime = System.nanoTime();
        elapsedTime = endTime - startTime;
        for (int elem : output) {
            System.out.printf("%d ", elem);
        }
        System.out.println();
        System.out.printf("For %d Intervals it took %d nanoseconds to search for a point\n", n, elapsedTime);

    }
}
