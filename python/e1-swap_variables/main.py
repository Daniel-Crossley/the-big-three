import sys

try:
    a = input("a = ")
    if not a:
        sys.exit()
    b = input("b = ")
    if not b:
        sys.exit()
except:
    sys.exit("Failed to read line.")
    
print("Perform Swap:")

print(f"a = {b}, b = {a}")
