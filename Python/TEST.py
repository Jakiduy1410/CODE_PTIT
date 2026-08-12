from queue import PriorityQueue as pq
import heapq

data = [1, 2, 5, 6, 7, 88]
# Biến list thành Max-Heap (hàng đợi ưu tiên lớn)
# Lưu ý: Python mặc định là Min-Heap, nên vẫn phải dùng mẹo -1
max_heap = [-x for x in data]
heapq.heapify(max_heap)

while max_heap:
    print(-heapq.heappop(max_heap))