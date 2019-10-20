package com.raafat;

import java.util.ArrayList;

public class Node {
    Interval interval;
    ArrayList<Interval> caconicalSubSet = new ArrayList<>();

    public Node() {

    }
    public Node(Interval i) {
        this.interval = i;
    }
}
