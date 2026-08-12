import sys
from collections import Counter

def main():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    it = iter(data)
    try:
        n = int(next(it))
        m = int(next(it))
    except StopIteration:
        return

    votes = [int(next(it)) for _ in range(n)]
    cnt = Counter(votes)

    sorted_counts = sorted(cnt.items(), key=lambda item: (-item[1], item[0]))

    if len(sorted_counts) < 2:
        print("NONE")
        return

    first_count = sorted_counts[0][1]
    second_count = None
    for key, count in sorted_counts:
        if count < first_count:
            second_count = count
            break

    if second_count is None:
        print("NONE")
        return

    second_keys = [key for key, count in sorted_counts if count == second_count]
    print(min(second_keys))


    
main()
