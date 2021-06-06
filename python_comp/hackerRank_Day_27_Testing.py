def minimum_index(seq):
    if len(seq) == 0:
        raise ValueError("Cannot get the minimum value index from an empty sequence")
    min_idx = 0
    for i in range(1, len(seq)):
        if seq[i] < seq[min_idx]:
            min_idx = i
    return min_idx

class TestDataEmptyArray: 
    def get_array():
        return []
    
class TestDataUniqueValues:
    def get_array():
        return [2, 5, 6, 1, 4]
    
    def get_expected_result():
        return 3
    
class TestDataExactlyTwoDifferentMinimums: 
    
    def get_array():
        return [2, 5, 6, 1, 4, 1]
    def get_expected_result():
        return 3
    
