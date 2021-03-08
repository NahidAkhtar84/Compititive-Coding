# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 09:19:39 2021

@author: User
"""

class BinarySearchTree:
    
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


    def add_child(self, data):
        
        if data == self.data:
            return
        
        if data < self.data:
            
            if self.left:
                #go to the end of the left segment
                self.left.add_child(data)
            else:
                self.left = BinarySearchTree(data)
                
        if data > self.data:
            
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BinarySearchTree(data)
                
    def in_order_traversal(self):
        
        elements = []
        
        if self.left:
            elements += self.left.in_order_traversal()
            
        elements.append(self.data)
        
        if self.right:
            elements += self.right.in_order_traversal()
            
        return elements
    
    def pre_order_traversal(self):
        elements = []
        
        elements.append(self.data)
        
        if self.left:
            elements += self.left.pre_order_traversal()
            
        if self.right:
            elements += self.right.pre_order_traversal()
            
        return elements
    
    def post_order_traversal(self):
        elements = []
        
        if self.left:
            elements += self.left.post_order_traversal()
            
        if self.right:
            elements += self.right.post_order_traversal()
            
        elements.append(self.data)
            
        return elements
            
        
def buildTree(numbers):
    
    root = BinarySearchTree(numbers[0])   

    for i in range(1, len(numbers)):
        
        root.add_child(numbers[i])
        
    return root

if __name__ == '__main__':
     
    numbers = [17, 4, 1, 20, 9, 23, 18, 34]
    
    numbers_tree = buildTree(numbers)
    print('in order traversal: ', numbers_tree.in_order_traversal())
    print('pre order traversal: ', numbers_tree.pre_order_traversal())
    print('post order traversal: ', numbers_tree.post_order_traversal())
    