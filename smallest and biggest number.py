
def minimum(arr):
    min = arr[0]
    for i in arr:
        if min > i: min = i
    return min

def maximum(arr):
    max = arr[0]
    for i in arr:
        if max < i: max = i
    return max
  
  
 """
  def minimum(arr):
    return min(arr)

  def maximum(arr):
    return max(arr)
 """


"""
def min(arr):
    return sorted(arr)[0]

def max(arr):
    return sorted(arr)[-1]
"""
