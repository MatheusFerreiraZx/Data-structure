A, B, C = map(input().split())
X, Y, Z = map(input().split())

max_containers = ((X // A) * (Y // B) * (Z // C))

print(max_containers)