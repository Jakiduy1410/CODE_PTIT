def main():
    
    h,m,s = map(int, input().split())
    
    angle = (30 * h) + (m * 0.5) + (s / 120)
    
    print(f"Angle: {angle}")

    

main()