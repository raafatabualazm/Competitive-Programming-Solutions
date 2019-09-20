package com.raafat;

import java.util.ArrayList;

public class IntervalTree {
    Node root;
    Node insertNode(Node root, Interval i) {
        Node temp = new Node(i);
        if (root == null) {
            root = temp;
        } else if (root.interval.begin > temp.interval.begin) {
            root.left = insertNode(root.left, i);
        } else {
            root.right = insertNode(root.right, i);
        }
        if (root.maxKey < i.end) {
            root.maxKey = i.end;
        }
        return root;
    }
    ArrayList<Interval> search(Node root, Interval i) {
        ArrayList<Interval> intervals = new ArrayList<Interval>();
        if (root == null) return intervals;
        if (root.interval.begin <= i.begin && root.interval.end >= i.end) {
            intervals.add(root.interval);
        }
        if (root.left != null && root.left.maxKey >= i.begin) {
            intervals.addAll(search(root.left, i));
        }
        if(root.right != null && root.right.maxKey >= i.begin && root.interval.begin <= i.begin) {
            intervals.addAll(search(root.right, i));
        }


        return intervals;
    }

    void inOrderTraverse(Node root) {
        if (root == null) return;
        inOrderTraverse(root.left);
        System.out.printf("The intervals begins at %d and ends at %d \n", root.interval.begin, root.interval.end);
        inOrderTraverse(root.right);
    }
}
