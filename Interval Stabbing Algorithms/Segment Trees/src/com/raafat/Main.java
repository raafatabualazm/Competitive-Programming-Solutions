package com.raafat;

import java.util.*;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int n, a, b, m, p;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter the number of intervals you want.");
        n = scn.nextInt();
        System.out.println("Enter the range beginning of intervals you want.");
        a = scn.nextInt();
        System.out.println("Enter the range ending of intervals you want.");
        b = scn.nextInt();
        System.out.println("Enter the point you want to query");
        p = scn.nextInt();
        Interval pi = new Interval();
        pi.begin = p;
        pi.end = p;
        Random rand = new Random();
        Interval x;
        long startTime, endTime, elapsedTime;
        Set<Interval> output;
        Integer[] points = new Integer[2*n];
        Interval[] intervals = new Interval[n];
        Set<Integer> points_unique = new HashSet<Integer>();
        for (int i = 0; i <n; i++) {
            x = new Interval();
            x.begin = a + rand.nextInt(b+1);
            x.end = a + rand.nextInt(b+1);
            if (x.begin > x.end) {
                m = x.begin;
                x.begin = x.end;
                x.end = m;
            }
            points_unique.add(x.begin);
            points_unique.add(x.end);
            intervals[i] = x;
        }

        points = points_unique.toArray(Integer[]::new);
        Arrays.sort(points);
        SegmentTrees segTree = new SegmentTrees(points);

        for (Interval i : intervals) {
            segTree.insertInterval(0, i);
        }
        startTime = System.nanoTime();
        output = segTree.search(0, p);
        endTime = System.nanoTime();
        elapsedTime = endTime - startTime;
        /*System.out.println("Intervals");
        for (Interval i : intervals) {
            System.out.printf("Start: %d  End: %d\n", i.begin, i.end);
        }
        System.out.println("Output");
        for (Interval i : output) {
            System.out.printf("Start: %d  End: %d\n", i.begin, i.end);
        } */
        System.out.printf("For %d Intervals it took %d nanoseconds to search for a point\n", n, elapsedTime);
    }
}
