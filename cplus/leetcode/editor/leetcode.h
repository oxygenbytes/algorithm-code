//
// Created by zxq on 2022/1/13.
//

#ifndef CPLUS_LEETCODE_H
#define CPLUS_LEETCODE_H

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* random;
    Node* next;
    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
        random = NULL;
        next = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

#endif //CPLUS_LEETCODE_H
