import sys

def check_in_range(grade):
    if (grade < 0) | (grade > 10):
        sys.exit()

try:
    geometry_grade = int(input("Geometry Grade: "))
    check_in_range(geometry_grade)

    algebra_grade = int(input("Algebra Grade: "))
    check_in_range(algebra_grade)

    physics_grade = int(input("Physics Grade: "))
    check_in_range(physics_grade)
except:
    sys.exit("Failed to read line, input must be an integer ranging 0 - 10.")

average_score = (geometry_grade + algebra_grade + physics_grade) / 3

print("----------------")
print(f"Average score = {average_score:.2}")

