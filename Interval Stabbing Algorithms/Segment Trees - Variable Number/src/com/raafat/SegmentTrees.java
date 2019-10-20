package com.raafat;

import java.util.Set;
import java.util.HashSet;

public class SegmentTrees {
    Node[] segmentTree;
    public SegmentTrees(Integer[] endPoints) {
        double n = Math.log(endPoints.length)/Math.log(2);
        int l = (int)Math.ceil(n);
        l = (int)Math.pow(2, l);
        this.segmentTree = new Node[2*l];
        buildTree(0, endPoints.length - 1, 0, endPoints);
    }

    public void buildTree(int begin, int end, int index, Integer[] data) {
        this.segmentTree[index] = new Node();
        this.segmentTree[index].interval = new Interval();
        if (begin == end) {
            this.segmentTree[index].interval.begin = data[begin];
            this.segmentTree[index].interval.end = data[begin];
            //System.out.printf("Start: %d  End: %d\n", this.segmentTree[index].interval.begin, this.segmentTree[index].interval.end);
            return;
        } else {
            int mid = (begin + end) / 2;
            // Recurse on left child
            buildTree(begin, mid, 2*index + 1, data);
            // Recurse on right child
            buildTree(mid + 1, end, 2*index + 2, data);

            this.segmentTree[index].interval = new Interval();
            this.segmentTree[index].interval.begin = (this.segmentTree[2*index + 1].interval.begin <  this.segmentTree[2*index + 2].interval.begin ? this.segmentTree[2*index + 1].interval.begin : this.segmentTree[2*index + 2].interval.begin);
            this.segmentTree[index].interval.end = (this.segmentTree[2*index + 1].interval.end >  this.segmentTree[2*index + 2].interval.end ? this.segmentTree[2*index + 1].interval.end : this.segmentTree[2*index + 2].interval.end);
        }
        // System.out.printf("Start: %d  End: %d\n", this.segmentTree[index].interval.begin, this.segmentTree[index].interval.end);
        return;
    }
    public void insertInterval(int index ,Interval i) {
        if (this.segmentTree[index].interval.begin >= i.begin && this.segmentTree[index].interval.end <= i.end) {
            this.segmentTree[index].caconicalSubSet.add(i);
        } else {
            if (this.segmentTree[2*index + 1].interval.begin <= i.end && this.segmentTree[2*index + 1].interval.end >= i.begin) {
                insertInterval(2*index + 1, i);
            }
            if (this.segmentTree[2*index + 2].interval.begin <= i.end && this.segmentTree[2*index + 2].interval.end >= i.begin) {
                insertInterval(2*index + 2, i);
            }
        }
    }
    public Set<Interval> search(int index, int point) {
        Set<Interval> output = new HashSet<>();
        if (this.segmentTree[index] == null) return output;
        output.addAll(this.segmentTree[index].caconicalSubSet);
        if (2*index + 1 >= this.segmentTree.length || this.segmentTree[2* index + 1] == null) return output;
        if (this.segmentTree[2*index + 1].interval.begin <= point && this.segmentTree[2*index + 1].interval.end >= point) {
            output.addAll( search(2*index + 1, point));
        }
        if (2*index + 2 >= this.segmentTree.length || this.segmentTree[2* index + 2] == null) return output;
        if (this.segmentTree[2*index + 2].interval.begin <= point && this.segmentTree[2*index + 2].interval.end >= point) {
            output.addAll(search(2 * index + 2, point));
        }

        return output;
    }
}
