package com.raafat;

public class Node {
    Interval interval;
    Node left;
    Node right;
    int maxKey;

    public Node(Interval i) {
        this.interval = i;
        this.left = null;
        this.right = null;
        this.maxKey = i.end;
    }
}
