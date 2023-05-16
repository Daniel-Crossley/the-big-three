try:
    a = input("a = ")
    b = input("b = ")
except:
    print("Failed to read line.")
    exit()

if (not a) | (not b):
    print("Please input something.")
    exit()

print("Perform Swap:")

print(f"a = {b}, b = {a}")
