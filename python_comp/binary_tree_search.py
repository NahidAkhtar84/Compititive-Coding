# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 10:40:32 2021

@author: User
"""

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
    
    def search_element(self, element):
        
        if element == self.data:
            return True
        
        if element < self.data:
            if self.left:
                return self.left.search_element(element)
            else:
                return False
            
        if element > self.data:
            if self.right:
                return self.right.search_element(element)
            else:
                return False
            
    def find_min(self):
        
        if self.left:
            return self.left.find_min()
        return self.data
    
    def find_max(self):
        
        if self.right:
            return self.right.find_max()
        return self.data
    
    def tree_element_sum(self):
        
        sum = self.data
        
        if self.left:
            sum += self.left.tree_element_sum()
            
        if self.right:
            sum += self.right.tree_element_sum()
            
        return sum
            
            
        
def buildTree(numbers):
    
    root = BinarySearchTree(numbers[0])   

    for i in range(1, len(numbers)):
        
        root.add_child(numbers[i])
        
    return root

if __name__ == '__main__':
     
    numbers = [17, 4, 1, 20, 9, 23, 18, 34]
    
    numbers_tree = buildTree(numbers)
    print(numbers_tree.in_order_traversal())
    print(numbers_tree.search_element(20))
    print('Minimum value: ', numbers_tree.find_min())
    print('Maximum Value: ', numbers_tree.find_max())
    print('Sum of all elements: ', numbers_tree.tree_element_sum())
    