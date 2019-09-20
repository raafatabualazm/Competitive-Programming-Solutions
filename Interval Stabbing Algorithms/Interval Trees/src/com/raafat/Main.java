package com.raafat;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

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
        IntervalTree it = new IntervalTree();
        Interval x;
        ArrayList<Interval> intervals;
        for (int i = 0; i <n; i++) {
            x = new Interval();
            x.begin = a + rand.nextInt(b+1);
            x.end = a + rand.nextInt(b+1);
            if (x.begin > x.end) {
                m = x.begin;
                x.begin = x.end;
                x.end = m;
            }
            it.root = it.insertNode(it.root, x);
        }

        System.out.println("Entering results");
        it.inOrderTraverse(it.root);
        System.out.println();
        System.out.println("Search results: ");
        intervals = it.search(it.root, pi);
        for (Interval elem : intervals) {
            System.out.printf("The intervals begins at %d and ends at %d \n", elem.begin, elem.end);
        }
    }
}
